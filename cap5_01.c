#include <stdio.h>

int main(void){
    int x, y, r, mdc;

    printf("Insira x e y: ");
    scanf("%d%d", &x, &y);

    do{
        r = x % y;
        if(r == 0)
            mdc = y;
        else if(r > 0){
            x = y;
            y = r;
        }
    }while(r != 0);

    printf("Resultado: %d", mdc);

    return 0;
}