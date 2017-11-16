#include <stdio.h>

void TROCA(int *x, int *y){
    int aux;
    aux = *x;
    *x = *y;
    *y = aux;
}

int main(){
    int x, y;
    printf("Digite o primeiro inteiro\n");
    scanf("%d", &x);
    printf("Digite o segundo inteiro\n");
    scanf("%d", &y);

    printf("\n\nValor original: x: %d e y: %d\n", x, y);

    TROCA(&x, &y);

    printf("\n\nPos troca: x: %d e y: %d\n", x, y);

    return 0;
}
