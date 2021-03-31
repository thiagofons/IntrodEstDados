#include <stdio.h>

#define N 10

int pares(int n, int* vet){
    int qntd = 0;
    for(int i = 0; i < n; i++){
        if(vet[i] % 2 == 0)
            qntd++;
    }
    return qntd;
}

int main(void){
    int vetor[N];

    printf("Insira os elementos do vetor: ");
    for(int i = 0; i < N; i++){
        scanf("%d", &vetor[i]);
    }

    printf("\nQuantidade de numeros pares:\t %d \n", pares(N, vetor));

    return 0;
}