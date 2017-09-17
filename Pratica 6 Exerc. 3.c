#include <stdio.h>
#define N 3
#include <time.h>


int main(){
    int i, j, x[N][N], soma = 0;
    srand(time(NULL));

    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            x[i][j] = rand() % 9 + 1;
        }
    }
    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            printf("%d ", x[i][j]);
        }
        printf("\n");
    }
    //printf("\n\nSoma = %d\n", x[0][0] + x[1][1] + x[2][2]);
    for(i = 0; i < N; i++){
        soma  += x[i][j];
        x[i][j++];
    }
    printf("Soma = &d\n", soma);

    return 0;
}
