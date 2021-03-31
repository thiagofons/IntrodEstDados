#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 4

typedef struct aluno{
    char nome[81];
    char matricula[8];
    char turma;
    float p1, p2, p3;
}Aluno;

void incializa(Aluno** turma, int n){
    for(int i = 0; i < n; i++)
        turma[i] = NULL;
}

void cria(Aluno** alunos, int i, char* nome, char* matricula, char turma, float p1, float p2, float p3){
    if(alunos[i] == NULL)
        alunos[i] = (Aluno *) malloc(sizeof(Aluno));

    strcpy(alunos[i]->nome, nome);
    strcpy(alunos[i]->matricula, matricula);
    alunos[i]->turma = turma;
    alunos[i]->p1 = p1;
    alunos[i]->p2 = p2;
    alunos[i]->p3 = p3;
    
}

void libera(Aluno** alunos, int n){
    for(int i = 0; i < n; i++){
        free(alunos[i]);
    }
    free(alunos);
}

float media(float *p1, float *p2, float *p3){
    return (*(p1) + *(p2) + *(p3))/3;
}

void imprime_aprovados(int n, Aluno** turma){
    float m;
    for(int i = 0; i < n; i++){
        m = media(&turma[i]->p1, &turma[i]->p2, &turma[i]->p3);
        
        if(m >= 7){
            printf("\n");
            printf("Nome: %s\n", turma[i]->nome);
            printf("Matricula: %s\n", turma[i]->matricula);
            printf("Turma: %c\n", turma[i]->turma);
            printf("Media: %f\n", m);
        }
    }
}

float media_turma(int n, Aluno** turma, char t){
    float soma = 0, qntd_alunos = 0;

    for(int i = 0; i < n; i++){
        if(turma[i]->turma == t){
            soma += media(&turma[i]->p1, &turma[i]->p2, &turma[i]->p3);
            qntd_alunos++;
        }
    }
    return (soma / qntd_alunos);
}

int main(void){
    Aluno* alunos[MAX];
    char* nome, matricula;
    char turma;
    float p1, p2, p3, m;

    incializa(alunos, MAX);
    
    cria(alunos, 0, "Thiago", "11902902", 'A', 0, 10, 10);
    cria(alunos, 1, "Rodolfo", "11902904", 'B', 4, 7, 10);
    cria(alunos, 2, "Joao", "11902902", 'A', 10, 10, 10);
    cria(alunos, 3, "Alberto", "11902902", 'A', 10, 10, 10);

    imprime_aprovados(MAX, alunos);

    m = media_turma(MAX, alunos, 'A');
    printf("\nMedia da turma A: %.1f\n", m);

    libera(alunos, MAX);

    return 0;
}