#include <stdio.h>
#include <string.h>

int conta_ocorrencias(char* s, char c){
    int qntd = 0;
    for(int i = 0; i < strlen(s); i++){
        if(s[i] == c)
            qntd++;
    }
    return qntd;
}


int main(void){
    char palavra[51], letra;
    int ocorrencias;

    printf("Insira a palavra: ");
    scanf(" %50[^\n]", palavra);

    printf("Insira a letra: ");
    scanf(" %c", &letra);

    ocorrencias = conta_ocorrencias(palavra, letra);

    printf("\nQuantidade de vezes que %c apareceu em %s: %d\n", letra, palavra, ocorrencias);

    return 0;    
}