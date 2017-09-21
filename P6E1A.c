// Criar uma matriz 4x4 e colocar a soma de suas linha em um vetor
#include <stdio.h>
#include <time.h>


int main(){
    #define tam 4
    int i, j, M[tam][tam], V[tam], soma;
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
    }
    printf("\n");
    soma = 0;
    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            soma += M[i][j];
        }
        V[i] = soma;
        soma = 0;
    }for(i = 0; i < tam; i++){
        printf("%d ", V[i]);
    }
    return 0;
}