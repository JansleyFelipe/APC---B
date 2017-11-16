#include <stdio.h>
#define tam 20

void LeiaVetor(int vet[tam]){
    int i;
    for(i = 0; i < tam; i++){
        scanf("%d", &vet[i]);
    }
}

int ProcuraX(int x, int vet[tam]){
    int i;
    for(i = 0; i < tam; i++){
        if(x == vet[i]){
            return i;
            break;
        }
    }
}

int main(){
    int vet[tam], x, pos;

    printf("Digite os 20 inteiros do vetor\n");
    LeiaVetor(vet);
    printf("Digite um inteiro\n");
    scanf("%d", &x);
    pos = ProcuraX(x, vet);

    printf("%d foi encontrado na posicao %d do vetor\n", x, pos);

    return 0;
}
