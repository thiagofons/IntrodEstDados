#include <stdio.h>

#define N 20

void inverte(int n, int* vet){
    int aux;

    for(int i = 0; i < (n/2); i++){
        aux = vet[i];
        vet[i] = vet[n-i-1];
        vet[n-i-1] = aux;
    }
}

int main(void){
    int vetor[N];

    printf("Insira os elementos do vetor: ");
    for(int i = 0; i < N;i++){
        scanf("%d", &vetor[i]);
    }
    
    inverte(N, vetor);
    printf("\nVetor invertido:\n");

    for(int i = 0; i < N; i++){
        printf("vet[%d] = %d\n", i, vetor[i]);
    }

    return 0;
}