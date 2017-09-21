// Soma de matrizes
#include <stdio.h>
#include <time.h>


int main(){
    #define tam 3
    int i, j, k, l, M1[tam][tam], M2[tam][tam], M3[tam][tam];
    srand(time(NULL));

    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            M1[i][j] = rand() % 9 + 0;
        }
    }for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            M2[i][j] = rand() % 9 + 0;
        }
    }printf("Matriz 1\n\n");
    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            printf("%d ", M1[i][j]);
        }
        printf("\n");
    }printf("\n");
    printf("Matriz 2\n\n");
    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            printf("%d ", M2[i][j]);
        }
        printf("\n");
    }for(k = 0; k < tam; k++){
        for(l = 0; l < tam; l++){
            M3[k][l] = M1[k][l] + M2[k][l];
        }
    }printf("\n");
    printf("Matriz 3(soma da matriz 1 com a matriz 2)\n\n");
    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            printf("%d ", M3[i][j]);
        }
        printf("\n");
    }


    return 0;
}