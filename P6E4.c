#include <stdio.h>
#include <time.h>
#define tam 5



int main(){
    int i, j, k, l, M[tam][tam], aux;
    srand(time(NULL));

    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            M[i][j] = rand() % 9 + 0;
        }
    }for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            aux = j;
            for(k = i; k < tam; k++){
               for(l = aux; l < tam; l++){
                    if(M[i][j] > M[k][l]){
                        aux = M[k][l];
                        M[k][l] = M[i][j];
                        M[i][j] = aux;
                    }
               }
               aux = 0;
            }
    }

    }
    printf("\n\n");
    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }

    return 0;
}
