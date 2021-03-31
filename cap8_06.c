#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void roda_string(char* str){
    char aux;

    for(int i = strlen(str) - 1; i > 0; i--){
        aux = str[i];
        str[i] = str[i-1];
        str[i-1] = aux;
        printf("%s\n", str);
    }
}

int main(void){
    char palavra[31];

    printf("Insira a palavra: ");
    scanf(" %30[^\n]", palavra);

    roda_string(palavra);

    printf("\nNova palavra: %s\n", palavra);

    return 0;
}