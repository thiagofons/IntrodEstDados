#include <stdio.h>
#include <string.h>

void shift_string(char* str){
    for(int i = 0; i < strlen(str); i++){
        if(str[i] == 'z' || str[i] == 'Z')
            str[i] -= 25;
        else
            str[i]++;
    }
}


int main(void){
    char palavra[51];

    printf("Insira a palavra: ");
    scanf(" %50[^\n]", palavra);

    shift_string(palavra);

    printf("\nNova palavra gerada: %s\n", palavra);

    return 0;
}