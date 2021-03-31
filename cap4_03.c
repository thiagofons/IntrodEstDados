#include <stdio.h>
#include <math.h>

int raizes(double a, double b, double c, double* px1, double* px2);

int main(void){
    double a, b, c, raiz1, raiz2, num;

    printf("Insira os coeficientes (a b c):");
    scanf("%lf%lf%lf", &a, &b, &c);

    num = raizes(a, b, c, &raiz1, &raiz2);

    if(num == 1){
        printf("Raiz: %lf\n", raiz1);
    }
    else if(num == 2){
        printf("Raiz 1: %lf\n", raiz1);
        printf("Raiz 2: %lf\n", raiz2);
    }

    return 0;
}

int raizes(double a, double b, double c, double* px1, double* px2){
    int x1, x2;

    if(a == 0)
        *px1 = -c/b;
        *px2 = -c/b;
        return 1;    
    
    int delta = pow(b, 2) - 4*a*c;
    
    if(delta < 0){
        printf("Raizes inexistentes\n");
        return 0;
    }
    else if(delta == 0){
        *px1 = -b / (2*a);
        return 1;
    }
    else{
        *px1 = (-b + sqrt(pow(b, 2) - 4*a*c)) / (2*a);
        *px1 = (-b - sqrt(pow(b, 2) - 4*a*c)) / (2*a);
        return 2;
    }    
}