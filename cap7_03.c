#include <stdio.h>
#include <stdlib.h>

float** ti_cria(int n){
    float **mat = (float **) malloc(sizeof(float) * n);
    
    for(int i = 0; i < n; i++)
        mat[i] = (float *) malloc(sizeof(int) * (i+1));

    return mat;
}

void ti_atribui(int i, int j, float x, float** mat){
    if(i <= j)
        mat[i][j] = x;
}

float ti_acessa(int i, int j, float** mat){
    if(i < j)
        return 0;

    return mat[i][j];
}

void ti_libera(int n, float** mat){
    for(int i = 0; i < n; i++)
        free(mat[i]);
    free(mat);
}

void imprime(float** mat, int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            printf("%f  ", mat[i][j]);
        }
        printf("\n\n");
    }
}

int main(void){
    int n;
    float **matriz;

    printf("Insira n: ");
    scanf("%d", &n);

    // Testar a funcao de criar matriz

    matriz = ti_cria(n);
    imprime(matriz, n);
    
    // Testar a funcao de atribuir valor

    int i, j;
    float valor, acesso;

    printf("\nInsira uma posicao: ");
    scanf("%d%d", &i, &j);
    printf("Insira um valor: ");
    scanf("%f", &valor);
    ti_atribui(i, j, valor, matriz);

    imprime(matriz, n);

    // Testar a funçao de acessar o valor

    printf("\nInsira uma posicao: ");
    scanf("%d%d", &i, &j);

    acesso = ti_acessa(i, j, matriz);

    if(acesso)
        printf("Valor da posicao [%d][%d]: %f\n", i, j, matriz[i][j]);
    else
        printf("Valor invalido ou igual a zero");

    // Testar a funcao de liberar

    ti_libera(n, matriz);

    return 0;
}