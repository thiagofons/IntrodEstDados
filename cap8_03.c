#include <stdio.h>
#include <string.h>

#define MAX 51

void minusculo(char* str){
    for(int i = 0; i < strlen(str); i++){
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] += ('a' - 'A');
    }
}


int main(void){
    char palavra[MAX];

    printf("Insira a palavra: ");
    scanf(" %50[^\n]", palavra);

    minusculo(palavra);

    printf("\nPalavra gerada: %s\n", palavra);

    return 0;
}

/*

palavra = "casa"

palavra = {'c', 'a', 's', 'a', '\0'}



*/