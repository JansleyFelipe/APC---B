#include <stdio.h>
#include <string.h>

int main(){
    char nome[20], sobrenome[20], newstring[40];
    int i, t;
    printf("Escreva seu nome\n");
    fflush(stdin);
    gets(nome);
    printf("Escreva seu sobrenome\n");
    gets(sobrenome);
    strcpy(newstring, nome);
    strcat(newstring, " ");
    strcat(newstring, sobrenome);
    t=strlen(newstring);


    printf("Nova string: %s\nTamanho: %d\n", newstring,t);
    printf("Primeira letra: %c\n", newstring[0]);
    printf("Ultima letra: %c\n", newstring[t-1]);

    return 0;
}
