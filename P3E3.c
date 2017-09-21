#include <stdio.h>

int main(){
    int i, sexo, percentualH, homem = 0, mulher = 0;
    float altura, Am = 0, Ah = 0, maior = 0, menor = 0, mediaA, mediaAP;
    for(i = 0; i < 3; i++){
        scanf("%d%f", &sexo, &altura);
        if(altura > maior){
            maior = altura;
        }else{
            menor = altura;
        }

        if(sexo == 0){
            homem++;
            Ah += altura;
        }else{
            mulher++;
            Am += altura;
        }
        mediaA = (float) Am / mulher;
        mediaAP = (float) (Am + Ah) / (mulher + homem);
        percentualH = homem;

    }
    printf("Maior altura: %.2f\nMenor altura: %.2f\nMedia de altura das mulheres: %.2f\nMedia de altura da populacao: %.2f\nPercentual de homens: %d%%\n", maior, menor, mediaA, mediaAP, percentualH);

    return 0;
}
