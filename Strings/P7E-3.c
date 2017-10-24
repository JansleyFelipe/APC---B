#include <stdio.h>
#include <string.h>

int main(){
    char s[25], caracter;
    int i;
    printf("Escreva uma string\n");
    fflush(stdin);
    gets(s);
    printf("Escreva uma caracter\n");
    scanf("%s", &caracter);

    int count = 0;
    int t = strlen(s);
    for(i = 0; i < t; i++){
        if(caracter == i){
            count++;
        }
    }
    printf("O caracter %c aparece %d vez(es) na string\n", caracter, count);
    return 0;
}
