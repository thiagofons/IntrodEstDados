#include <stdio.h>
#include <stdlib.h>

int npares(int *v, int n){
    int res = 0;
    for(int i = 0; i < n; i++){
        if(v[i] % 2 == 0)
            res++;
    }
    return res;
}

int* somente_pares(int n, int *v, int pares){
    int *novo_vetor = (int *) malloc(sizeof(int) * pares), j=0;

    for(int i = 0; i < n; i++){
        if(v[i] % 2 == 0){
            novo_vetor[j] = v[i];
            j++;
        }
    }
    return novo_vetor;
}

int main(void){
    int n;
    printf("Insira o numero de elementos: ");
    scanf("%d", &n);

    int vetor[n], pares, *vetor_pares;
    for(int i = 0; i < n; i++){
        printf("\nInsira o elemento [%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    pares = npares(vetor, n);
    vetor_pares = somente_pares(n, vetor, pares);

    for(int i = 0; i < pares; i++){
        printf("\nvetor_pares[%d] = %d", i, vetor_pares[i]);
    }

    free(vetor_pares);

    return 0;
}