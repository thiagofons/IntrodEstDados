#include <stdio.h>

#define N 5

int testa_PA(int n, int *v){
    int fator = v[1] - v[0];
    
    for(int i = 1; i < n-1; i++){
        if(v[i+1] - v[i] != fator)
            return 0;
    }
    return fator;
}


int main(void){
    int vet[N], res;

    printf("Insira os valores: ");
    for(int i = 0; i < N; i++){
        scanf("%d", &vet[i]);
    }

    res = testa_PA(N, vet);

    if(!res)
        printf("\nNao eh uma PA\n");
    else    
        printf("\nResultado: %d\n", res);

    return 0;
}