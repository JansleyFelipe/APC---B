#include <stdio.h>
#include <string.h>

int main(){
    char frase[40];
    int i, count = 0, t;

    printf("Digite uma linha do teclado\n");
    fflush(stdin);
    gets(frase);
    t = strlen(frase);

    for(i = 0; i < t; i++){
        if(frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u'){
            printf("As vogais sao: %c", frase[i]);
            count++;
        }
    }
    printf("\nAs vogais aparecem %d vez(es)\n", count);

    return 0;
}
