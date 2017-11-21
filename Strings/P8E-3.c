#include <stdio.h>
#include <string.h>

int main(){
    char s1[50], s2[50], s2Original[50];
    int i, j, count = 0;

    printf("Escreva a primeira string\n");
    fflush(stdin);
    gets(s1);
    printf("Escreva a segunda string\n");
    fflush(stdin);
    gets(s2);
    strcpy(s2Original, s2);
    if(strlen(s1) == strlen(s2)){
        for(i = 0; s1[i] != '\0'; i++){
            for(j = 0; s2[j] != '\0'; j++){
                if(s1[i] == s2[j]){
                    s2[j] = '7';
                    count++;
                }
            }
        }
        if(count == strlen(s1)){
            printf("%s eh uma anagrama de %s\n", s1, s2Original);
        }
        else{
            printf("%s nao eh uma anagrama de %s\n", s1, s2Original);
        }
    }
    else
        printf("%s nao eh uma anagrama de %s\n", s1, s2Original);
    return 0;
}
