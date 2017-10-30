#include <stdio.h>
#define N 6
#include <time.h>


int main(){
    int i, j, x[N][N], soma, soma1;
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
    soma = 0;
    soma1 = 0;
    for(i= 0; i < N; i++){
        soma += x[i][(N - 1) - i];
        soma1 += x[i][(N - N) + i];
    }
    printf("Soma Diagonal Principal = %d\n", soma1);
    printf("Soma Diagonal Secundaria = %d\n", soma);
    return 0;
}
