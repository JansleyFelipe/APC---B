#include <stdio.h>
#define max 5
#include <time.h> //biblioteca para o srand(time(NULL)) funcionar, pois faz parte dessa biblioteca


int main(){

    int i, j, x[max][max], y[max][max], aux;

    srand(time(NULL)); // para o rand()... funcionar

    for(i = 0; i < max; i++){
        for(j = 0; j < max; j++){
            x[i][j] = rand() % 9 + 1; //rand() % 9 + 1 eh para gerar numeros aleatorios de 1 a 9
        }
    }
    for(i = 0; i < max; i++){
        for(j = 0; j < max; j++){
            printf("%d ", x[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz Nova\n\n");

    for(i = 0; i < max; i++){
        for(j = 0; j < max; j++){
           aux = x[j][i];
           x[j][i] = x[i][j];
           x[i][j] = aux;
        }
    }
    for(i = 0; i < max; i++){
        for(j = 0; j < max; j++){
            printf("%d ", x[j][i]);
        }
        printf("\n");
    }

    return 0;
}
