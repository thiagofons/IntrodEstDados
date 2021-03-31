#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* retira_sufixo(char* s, int n){
    int tam = strlen(s) - n, i;
    char* nova_string = (char *) malloc(sizeof(char) * tam);
    
    for(i = 0; i < tam; i++){
        nova_string[i] = s[i];
    }
    nova_string[i] = '\0';

    return nova_string;
}

int main(void){
    char texto[51], *nova_palavra;
    int n;

    printf("Insira o texto: ");
    scanf(" %50[^\n]", texto);
    printf("Insira a quantidade de caracteres a serem retirados: ");
    scanf("%d", &n);

    nova_palavra = retira_sufixo(texto, n);

    printf("\nNova palavra gerada: %s\n", nova_palavra);

    free(nova_palavra);
    
    return 0;
}