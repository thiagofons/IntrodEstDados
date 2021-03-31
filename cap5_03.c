#include <stdio.h>

int fibonacci(int n);

int main(void){
    int n, x;

    printf("\nImprimir os primeiros n termos");
    printf("\nInsira n: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("fibo[%d] = %d\n", i, fibonacci(i));
    }

    printf("\nDeterminar se x pertence a serie");
    printf("\nInsira x: ");
    scanf("%d", &x);

    int i = 0;

    while(fibonacci(i) <= x){
        if(fibonacci(i) == x){
            printf("Pertence\n");
            break;
        }
        i++;
    }
    if(fibonacci(i) != x)
        printf("Nao pertence\n");

    return 0;
}

int fibonacci(int n){
    if(n == 0)
        return 0;
    if(n < 2)
        return 1;
    else{
        int a = 1, b = 1, c;

        for(int j = 2; j < n; j++){
            c = a + b;
            a = b;
            b = c;
        }
        return b;
    }
}