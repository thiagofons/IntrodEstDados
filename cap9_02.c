#include <stdio.h>
#include <math.h>

typedef struct vetor{
    float x;
    float y;
    float z;
}Vetor;

float modulo(Vetor* v){
    float res = pow(v->x, 2) + pow(v->y, 2) + pow(v->z, 2);

    return sqrt(res);
}   

float cosseno(Vetor* v1, Vetor* v2){
    float prod_interno = (v1->x * v2->x + v1->y * v2->y + v1->z * v2->z);
    float res = prod_interno / (modulo(v1) * modulo(v2));

    return res;
}

float escalar(Vetor* v1, Vetor* v2){
    return (modulo(v1) * modulo(v2) * cosseno(v1, v2));
}

void captura(Vetor* v, char nome){
    printf("Insira as coordenadas do vetor %c: ");
    scanf("%f%f%f", &v->x, &v->y, &v->z);
}

int main(void){
    Vetor v1, v2;

    captura(&v1, '1');
    captura(&v2, '2');

    printf("\nO produto escalar entre eles vale: %.1f\n", escalar(&v1, &v2));

    return 0;
}