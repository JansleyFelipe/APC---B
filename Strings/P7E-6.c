#include <stdio.h>
#include <string.h>

int main(){
    char palavra[8], gaga[8];
    int i, t, j = 0;

    printf("Escreva uma palavra\n");
    fflush(stdin);
    gets(palavra);
    puts(palavra);

    t = strlen(palavra);

    for(i = 0; i < t; i++){
        gaga[j] = palavra[i];
        gaga[j + 1] = palavra[i];
        j += 2;
    }
    gaga[j] = '\0';
    puts(gaga);
    return 0;
}
