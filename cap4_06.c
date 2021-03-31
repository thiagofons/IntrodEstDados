#include <stdio.h>

int coef(int n, int k);

int main(void){
    int n, k;
    
    printf("Insira n e k: ");
    scanf("%d%d", &n, &k);

    printf("%d", coef(n, k));
    return 0;    
}

int coef(int n, int k){
    if(n >= 0)
        if(k == 0 || k == n)
            return 1;
    
    else if(n > k && k > 0)    
        return (coef(n-1, k) + coef(n-1, k-1));
}