#include <stdio.h>
#include <math.h>

int primo(int n);

int main(void){
    int x, n;

    printf("Insira um numero: ");
    scanf("%d", &x);

    printf("Numeros primos menores que %d:\n", x);
    
    for(int i = 2; i < x; i++){
        if(primo(i))
            printf("%d ", i);
    }
    putchar('\n');

    printf("\nInsira um numero: ");
    scanf("%d", &n);

    printf("Primeiros %d numeros primos:\n", n);

    int i = 0, num = 2;
    while(i < n){
        if(primo(num)){
            printf("%d ", num);
            i++;
        }
        num++;
    }
    putchar('\n');

    return 0;
}

int primo(int n){
    if(n == 2)
        return 1;
    
    else if(n < 2 || (n % 2) == 0){
        return 0;
    }

    else{
        int lim = (int) sqrt(n);
        
        for(int i=3; i <= lim; i+=2){
            if(n % i == 0)
                return 0;
        }
        return 1;
    }
}