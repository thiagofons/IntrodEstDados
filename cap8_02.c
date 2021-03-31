#include <stdio.h>
#include <string.h>

#define MAX 51

int eh_vogal(char c){
    if((c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') || (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'))
        return 1;
    return 0;
}

int conta_vogais(char* str){
    int num = 0;
    for(int i = 0; i < strlen(str); i++){
        if(eh_vogal(str[i]))
            num++;
    }
    return num;
}


int main(void){
    char palavra[MAX];

    printf("Insira a palavra: ");
    scanf(" %50[^\n]", palavra);

    printf("\nNumero de vogais de %s: %d\n", palavra, conta_vogais(palavra));

    return 0;
}