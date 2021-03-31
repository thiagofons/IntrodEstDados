#include <stdio.h>

typedef struct ponto{
    float x;
    float y;
}Ponto;

int dentroRet(Ponto* v1, Ponto* v2, Ponto* p){
    if((p->x >= v1->x && p->x <= v2->x) && (p->y >= v1->y && p->y <= v2->y))
        return 1;
    return 0;
}

void captura(Ponto* pp, char nome){
    printf("Insira os dados do ponto %c: ", nome);
    scanf("%f%f", &pp->x, &pp->y);
}

int main(void){
    Ponto vert1, vert2, p;

    captura(&vert1, '1');
    captura(&vert2, '2');
    captura(&vert1, 'p');

    if(dentroRet(&vert1, &vert2, &p))
        printf("\nDentro\n");
    else
        printf("\nFora\n");

    return 0;
}