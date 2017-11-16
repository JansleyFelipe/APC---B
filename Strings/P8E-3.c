#include <stdio.h>
#include <string.h>

int main(){
    char s1[50], s2[50];
    int i, j, x = 0, t1, t2, count = 0;

    printf("Escreva a primeira string\n");
    fflush(stdin);
    gets(s1);
    t1 = strlen(s1);
    printf("Escreva a segunda string\n");
    fflush(stdin);
    gets(s2);
    t2 = strlen(s2);

    for(i = 0; i < t1; i++){
        for(j = 0; j < t2; j++){
            if(s1[i] == s2[j]){
                count++;
            }
        }
    }
    if(count == t1 && count == t2){
        printf("%s eh uma anagrama de %s\n", s1, s2);
    }
    else{
        printf("%s nao eh uma anagrama de %s\n", s1, s2);
    }
    return 0;
}
