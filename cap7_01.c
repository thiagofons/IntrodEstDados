#include <stdio.h>
#include <stdlib.h>

float* reverso(int n, float *v){
    float *novo_vetor = (float *) malloc(sizeof(float) * n);

    for(int i = 0; i < n; i++){
        novo_vetor[i] = v[n-i-1];
    }
    return novo_vetor;
}

int main(void){
    int n;
    
    printf("Insira a quantidade de elementos: ");
    scanf("%d", &n);

    float vetor[n], *vetor_reverso;
 
    for(int i = 0; i < n; i++){
        printf("\nInsira o elemento [%d]: ", i);
        scanf("%f", &vetor[i]);
    }

    vetor_reverso = reverso(n, vetor);
    
    printf("\nVetor reverso: \n");
    for(int i = 0; i < n; i++){
        printf("vetor_reverso[%d] = %f\n", i, vetor_reverso[i]);
    }

    free(vetor_reverso);

    return 0;
}