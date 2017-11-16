#include <stdio.h>
#define tam 10

void LeiaVetor10(int vet[tam]){
    int i;
    for(i = 0; i < tam; i++){
        scanf("%d", &vet[i]);
    }
}

void Multiplica(int mult, int vet[tam]){
    int i;
    for(i = 0; i < tam; i++){
        vet[i] *= mult;
    }
}

int main(){
    int vet[tam], mult, i;
    printf("Digite os 10 valores inteiros do vetor\n");
    LeiaVetor10(vet);
    printf("Digite um inteiro para ser multiplicado com cada elemento do vetor\n");
    scanf("%d", &mult);
    Multiplica(mult, &vet);

    for(i = 0; i < tam; i++){
        printf("%d ", vet[i]);
    }
    return 0;
}
