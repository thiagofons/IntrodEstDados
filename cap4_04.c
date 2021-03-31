#include <stdio.h>
#include <math.h>

double pot(double x, int k);

int main(void){
    int base, expoente;

    printf("Insira a base e o expoente: ");
    scanf("%d%d", &base, &expoente);

    printf("\nResultado: %lf", pot(base, expoente));

    printf("\nUsando math.h: %lf", pow(base, expoente));

    return 0;
}

double pot(double x, int k){        
    if(k > 1){
        x *= pot(x, k-1);
    }
    if(k == 0)
        x = 1;
    return x;
}