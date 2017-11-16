// Indique o menor elemento da matriz
#include <stdio.h>
#include <time.h>


int main(){
    #define tam 5
    int i, j, M[tam][tam], menor;
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
    }printf("\n");
    menor = M[0][0];
    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            if(M[i][j] < menor){
                menor = M[i][j];
            }
        }
    }printf("\nMenor elemento da matriz eh: %d\n", menor);
    return 0;
}