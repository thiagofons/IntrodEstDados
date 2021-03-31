#include <stdio.h>

#define N 10

float minimo(int n, float *vet){
    float min = vet[0];

    for(int i = 1; i < n; i++){
        if(vet[i] < min)
            min = vet[i];
    }
    return min;
}

int main(void){
    float vetor[N];

    printf("Insira os elementos do vetor: ");
    for(int i = 0; i < N; i++)
        scanf("%f", &vetor[i]);

    printf("\nMenor valor do vetor: %.1f\n", minimo(N, vetor));

    return 0;
}