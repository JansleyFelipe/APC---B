#include <stdio.h>

void soma10(int *x){
    *x += 10;
}
int main(){
    int valor;
    printf("Digite um valor\n");
    scanf("%d", &valor);
    soma10(&valor);
    printf("Total: %d", valor);

    return 0;
}
