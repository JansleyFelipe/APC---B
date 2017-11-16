#include <stdio.h>
#include <string.h>

int main(){
    char palavra[80];
    int i, count = 0;

    printf("Digite uma string\n");
    fflush(stdin);
    gets(palavra);

    for(i = 0; palavra[i] != '\0'; i++){
        count++;
    }
    printf("O tamanho da string eh %d\n", count);
    return 0;
}
