#include <stdio.h>
#include <math.h>

#define N 10

float geometrica(int n, float *v){
    int media = 1;

    for(int i = 0; i < n; i++){
        media *= v[i];
    }
    media = pow(media, (1/n));
    
    return media;
}

int main(void){
    float vet[N];

    printf("Insira os valores: ");
    for(int i = 0; i < N; i++){
        scanf("%f", &vet[i]);
    }

    printf("\nMedia geometrica = %f\n", geometrica(N, vet));

    return 0;
}