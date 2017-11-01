#include <stdio.h>

void somadiv(int x, int *y){
    *y += x;
}

int main(){
    int number, i, soma = 0;

    printf("Digite um numero\n");
    scanf("%d", &number);

    for(i = 0; i <= number; i++){
        if(number%i == 0){
             somadiv(i, &soma);
        }
    }
    printf("A soma dos divisores de %d eh: %d", number, soma);

    return 0;
}
