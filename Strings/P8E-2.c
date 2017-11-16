#include <stdio.h>
#include <string.h>

int main(){
    char s1[20], inversa[20];
    int i, t;

    printf("Escreva uma string\n");
    fflush(stdin);
    gets(s1);
    t = strlen(s1);
    for(i = 0; i < t; i++){
        inversa[i] = s1[(t - 1) - i];
    }
    inversa[t] = '\0';
    if(strcmp(s1,inversa) == 0){
        printf("%s eh palindroma\n", s1);
    }
    else{
        printf("Nao eh palindroma\n");
    }
    return 0;
}
