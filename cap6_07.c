#include <stdio.h>

#define N 10

float ponderada(int n, float *v, float *p){
    float media = 0, pesos = 0;

    for(int i = 0; i < n; i++){
        media += v[i] * p[i];
        pesos += p[i];
    }
    media /= pesos;

    return media;
}

int main(void){
    float valores[N], pesos[N];

    printf("\nInsira os pesos: ");
    for(int i = 0; i < N; i++){
        scanf("%f", &pesos[i]);
    }
    printf("\nInsira os valores: ");
    for(int i = 0; i < N; i++){
        scanf("%f", &valores[i]);
    }

    printf("\nMedia ponderada = %f\n", ponderada(N, valores, pesos));

    return 0;
}