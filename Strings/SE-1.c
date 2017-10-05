#include <stdio.h>
#include <string.h>

int main(){
    char nome[10], inversa[10];
    int i,T;
    printf("Escreva uma string de 4 caracteres\n");
    fflush(stdin);
    gets(nome);
    T = strlen(nome);
    for(i = 0; i < T; i++){
        inversa[i] = nome[(T-1)-i];
    }
    inversa[T]='\0';
    printf("\n\n\tNOME =  ") ;
    puts(nome);
    printf("\n\n\tINVERSA =  ") ;
    puts(inversa);


    return 0;
}
