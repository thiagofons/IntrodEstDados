#include <stdio.h>
#include <math.h>

typedef struct ponto{
    float x, y;
}Ponto;

typedef struct circulo{
    Ponto c;
    float r;
}Circulo;

float distancia_2pontos(Ponto* a, Ponto* b){
    float res = sqrt(pow(b->x - a->x, 2) + pow(b->y - a->y, 2));

    return res;
}

int intersecao(Circulo* a, Circulo* b){
    if(distancia_2pontos(&a->c, &b->c) < a->r)
        return 1;
    else
        return 0;
}

float comprimento(int n, Ponto* v){
    float soma = 0;
    for(int i = 0; i < n-1; i++)
        soma += distancia_2pontos(&v[i], &v[i+1]);
    
    return soma;
}

void pedir_ponto(Ponto* p, char nome){
    printf("Insira x e y do ponto %c: ", nome);
    scanf("%f%f", &p->x, &p->y);
}

void pedir_raio(Circulo* c, char nome){
    printf("Insira o raio do circulo %c: ", nome);
    scanf("%f", &c->r);
}
int main(void){
    /* Testar a do circulo */

    Circulo c1, c2;

    pedir_ponto(&c1.c, '1');
    pedir_raio(&c1, '1');
    pedir_ponto(&c2.c, '2');
    pedir_raio(&c2, '2');

    if(intersecao(&c1, &c2))
        printf("\nOcorre intersecao\n");
    else
        printf("\nNao ocorre intersecao\n");

    /* Testar a da poligonal */

    Ponto poligonal[5];

    for(char i = '1'; i < '5'; i++){
        pedir_ponto(&poligonal[i], i);        
    }

    printf("\nComprimento da poligonal: %f\n", comprimento(5, poligonal));

    return 0;
}