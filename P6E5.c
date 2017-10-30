#include <stdio.h>
#include <time.h>
#define tam 5


int main(){
    int i, j, M[tam][tam], s = 0;
    srand(time(NULL));

    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            M[i][j] = rand() % 5 + 1;
        }
    }
    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
        if(i > j){
            if(M[i][j] != M[j][i]){
                s = 1;
                }
            }
        }
    }
    if(s == 1)
        printf("Nao eh simetrica\n");
    else
        printf("Eh simetrica\n");

    return 0;
}
