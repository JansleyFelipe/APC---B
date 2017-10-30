#include <stdio.h>
#include <string.h>

int main(){
    char frase[40], caracter;
    int i, t, count = 0;

    printf("Digite uma frase\n");
    fflush(stdin);
    gets(frase);
    t = strlen(frase);

    for(i = 0; i < t; i++){
        if(frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u'){
            count++;
        }
    }
    printf("\nA frase possui %d vogais\n", count);
    printf("Digite uma vogal ou consoante\n");
    scanf("%c", &caracter);

    for(i = 0; i < t; i++){
        if(frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u'){
            frase[i] = caracter;
        }
    }
    printf("\n\nVogais substituido pelo caracter\n");
    puts(frase);
    return 0;
}
