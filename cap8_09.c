#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* concatena(char* s1, char* s2, char sep){
    char* nova_string = (char *) malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 2));
    int i = 0, j = 0;

    while(s1[i] != '\0'){
        nova_string[i] = s1[i];
        i++;
    }
    nova_string[i++] = sep;

    while(s2[j] != '\0'){
        nova_string[i] = s2[j];
        i++;
        j++;
    }
    nova_string[i] = '\0';
    
    return nova_string;    
}


int main(void){
    char palavra1[31], palavra2[31], separador, *nova_palavra;

    printf("Insira a primeira palavra: ");
    scanf(" %30[^\n]", palavra1);
    
    printf("Insira a segunda palavra: ");
    scanf(" %30[^\n]", palavra2);
    
    printf("Insira o separador: ");
    scanf(" %c", &separador);

    nova_palavra = concatena(palavra1, palavra2, separador);

    printf("\nNova palavra gerada: %s\n", nova_palavra);

    free(nova_palavra);
    
    return 0;
}