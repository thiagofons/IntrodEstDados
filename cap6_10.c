#include <stdio.h>

void imprime(int *v, int n){
    for(int i = 0; i < n; i++)
        printf("\nhist[%d] = %d", i, v[i]);
}

void histograma(int n, float *v, int *h){
    int ind = 0;

    for(float i = 0.1; i <= 1; i+=0.1){
        for(int j = 0; j < n; j++){
            if(v[j] >= (i-0.1) && v[j] < i)
                h[ind] += 1;
        }
        ind++;
    }
}


int main(void){
    int n;

    printf("Insira a quantidade de elementos: ");
    scanf("%d", &n);

    if(n <= 0)  return 0;

    float vetor[n];
    int hist[10];

    for(int i = 0; i < 10; i++){
        hist[i] = 0;
    }

    for(int i = 0; i < n; i++){
        scanf("%f", &vetor[i]);
    }

    histograma(n, vetor, hist);
    imprime(hist, n);

    return 0;
}

