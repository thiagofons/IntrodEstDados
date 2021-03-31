#include <stdio.h>

#define N 10

float harmonica(int n, float *v){
    float media = 0;
    for(int i = 0; i < n; i++){
        media += (1 / v[i]);
    }
    return media;
}

int main(void){
    float vet[N];

    printf("Insira os valores: ");
    for(int i = 0; i < N; i++){
        scanf("%f", &vet[i]);
    }

    printf("\nMedia harmonica = %f\n", harmonica(N, vet));

    return 0;
}