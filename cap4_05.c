#include <stdio.h>

int fibo(int n){
    if(n == 0 || n == 1)
        return 1;
    else
        return (fibo(n - 2) + fibo(n - 1));
}

int main(void){
    int n;

    printf("Insira o valor de n: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("%d\n", fibo(i));
    }
    return 0;
}