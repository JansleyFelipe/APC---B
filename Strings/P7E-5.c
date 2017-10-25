#include <stdio.h>
#include <string.h>

int main(){
    char palavra[50], nova[50];
    int i, t, j = 0;
    printf("Escreva uma string\n");
    fflush(stdin);
    gets(palavra);
    t = strlen(palavra);

    for(i = 0; i < t; i++){
        if(!(palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u')){
            nova[j] = palavra[i];
            j++;
        }
    }
    nova[j] = '\0';
    puts(nova);

    return 0;
}
