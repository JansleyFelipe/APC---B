#include <stdio.h>
#include <math.h>

int QP(int a){
    float result = sqrt(a);
    int aux = result;
    if(aux == result){
        return 1;
    }

}

int main(){
    int number, prova = 0;

    printf("Digite um numero inteiro positivo\n");
    scanf("%d", &number);
    if(number > 0){
        prova = QP(number);
        if(prova){
            printf("%d eh um quadrado perfeito\n", number);
        }
        else{
            printf("%d nao eh um quadrado perfeito\n", number);
        }
    }


    return 0;
}
