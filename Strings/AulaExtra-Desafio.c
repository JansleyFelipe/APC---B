#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(){
    char palavra[80];
    int i, t;

    srand(time(NULL));

    printf("Digite uma string\n");
    fflush(stdin);
    gets(palavra);
    t = strlen(palavra);

    for(i = 0; i < t; i++){
        if(palavra[i] != ' '){
            i = rand() % (t - 1) + 0;
            palavra[i] = strupr(palavra[i]);
        }
    }
    puts(palavra);

    return 0;
}
