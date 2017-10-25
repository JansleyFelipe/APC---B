#include <stdio.h>
#include <string.h>

int main(){
    char nome[50], letra;
    int i, t;
    printf("Escreva um nome\n");
    fflush(stdin);
    gets(nome);
    t = strlen(nome);
    letra = nome[0];
    printf("%c", letra);
    for(i = 0; i < t; i++){
        if(nome[i] == ' '){
            printf("%c", nome[i + 1]);
        }
    }


    return 0;
}
