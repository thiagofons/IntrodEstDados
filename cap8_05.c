#include <stdio.h>
#include <string.h>

#define MAX 51

void string_oposta(char* str){
    int dist, nova_dist;
    for(int i = 0; i < strlen(str); i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            if(str[i] < ('z' + 'a')/2)
                str[i] = 'z' - (str[i] - 'a');
            else
                str[i] = 'a' + ('z' - str[i]);
        }
        else if(str[i] >= 'A' && str[i] <= 'Z'){
            if(str[i] < ('Z' + 'A')/2)
                str[i] = 'A' - (str[i] - 'A');
            else
                str[i] = 'A' + ('Z' - str[i]);
        }        
    }
}


int main(void){
    char palavra[MAX];

    printf("Insira a palavra: ");
    scanf(" %30[^\n]", palavra);

    string_oposta(palavra);

    printf("\nPalavra oposta: %s\n", palavra);

    return 0;
}