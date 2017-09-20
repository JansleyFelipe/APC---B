#include <stdio.h>
#include <time.h>
#define tam 5


int main(){
    int i, j, M[tam][tam];
    srand(time(NULL));

    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            M[i][j] = rand() % 5 + 1;
        }
    }
    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            printf("%d", M[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    if(M[i][j] == M[j][i]){
        printf("Eh simetrica\n");
    }else{
        printf("Nao eh simetrica\n");
        }

    return 0;
}
