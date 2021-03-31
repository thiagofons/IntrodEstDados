#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* converte(char* s){
    char nova[strlen(s)];

    int k = 0;
    for(int i = 0; i < strlen(s); i++){
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')){
            nova[k] = s[i];
            k++;
        }
    }
    nova[k] = '\0';

    char* nova_string = (char *) malloc(sizeof(char) * (strlen(nova)+1));
    
    for(int i = 0; i < strlen(nova)+1; i++)
        nova_string[i] = nova[i];

    return nova_string;
}

int main(void){
    char palavra[31], *nova_palavra;

    printf("Insira a palavra: ");
    scanf(" %30[^\n]", palavra);

    nova_palavra = converte(palavra);

    printf("\nNova palavra gerada: %s\n", nova_palavra);

    free(nova_palavra);
    
    return 0;
}

