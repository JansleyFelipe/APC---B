#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char s[40];
    printf("Escreva uma string\n");
    fflush(stdin);
    gets(s);

    puts(strupr(s));
    return 0;
}
