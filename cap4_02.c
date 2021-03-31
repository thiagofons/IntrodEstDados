#include <stdio.h>

int mdc(int x, int y);

int main(void){
    int a, b, c, res;

    printf("Insira os 3 valores: ");
    scanf("%d%d%d", &a, &b, &c);

    res = mdc(mdc(a, b), c);

    printf("\nMDC = %d\n", res);
    return 0;
}

int mdc(int x, int y){
    int r = x % y;

    if(r == 0)
        return y;
    else
        return mdc(y, x);
}