#include <stdio.h>
#include <string.h>

int main(){
    char frase[80];
    int i, t;

    printf("Escreva uma frase\n");
    fflush(stdin);
    gets(frase);
    t = strlen(frase);

    for(i = 0;i < t; i++){
        if(frase[i] == ' '){
            frase[i] = frase[i + 1];
        }
    }
    puts(frase);
    return 0;
}
