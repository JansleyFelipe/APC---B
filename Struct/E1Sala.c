#include <stdio.h>
#include <stdlib.h>

struct dados{
    int idade, filhos;
    float salario;
    char sexo;
};
typedef struct dados dados;

#define tam 100
void MediaIdadeMulheres(dados a[], float *media);
void MediaSalarioP(dados a[], float *mediaS);
void MediaNumeroFilhos(dados a[], float *mediaF);
int MenorIdadeMulher(dados a[]);
void Leitura(dados a[]);

int main(){
    dados v[tam];
    float media, mediaS, mediaF;
    int menoridade;

    Leitura(v);
    MediaIdadeMulheres(v, &media);
    printf("\n A media de idade das mulheres com salario inferior ao salario minimo eh: %.1f", media);
    MediaSalarioP(v, &mediaS);
    printf("\n A media de salario da populacao eh: %.2f", mediaS);
    MediaNumeroFilhos(v, &mediaF);
    printf("\n A media do numero de filhos eh: %.1f", mediaF);
    menoridade = MenorIdadeMulher(v);
    printf("\n A menor idade do sexo feminino eh: %d anos", menoridade);

    return 0;
}

void Leitura(dados a[]){
    int i;
    for(i = 0; i < tam; i++){
        system("cls");
        printf("\n Pessoa %d", i);
        printf("\n Idade: ");
        scanf("%d", &a[i].idade);
        printf("\n Numero de filhos: ");
        scanf("%d", &a[i].filhos);
        printf("\n Salario: ");
        scanf("%f", &a[i].salario);
        printf("\n Sexo: ");
        fflush(stdin);
        scanf("%c", &a[i].sexo);
    }
}

void MediaIdadeMulheres(dados a[], float *media){
    int i, count = 0, idade = 0;

    for(i = 0; i < tam; i++){
        if(a[i].sexo == 'f'){
            if(a[i].salario < 937.00){
                idade += a[i].idade;
                count++;
            }
            *media = idade/count;
        }
    }
}

void MediaSalarioP(dados a[], float *mediaS){
    int i;
    float salario = 0;

    for(i = 0; i < tam; i++){
        salario +=  a[i].salario;
    }
    *mediaS = salario/tam;
}

void MediaNumeroFilhos(dados a[], float *mediaF){
    int i, filhos = 0;

    for (i = 0; i < tam ; i++){
        filhos += a[i].filhos;
    }
    *mediaF = filhos/tam;
}

int MenorIdadeMulher(dados a[]){
    int i, menor;
    menor = a[0].idade;

    for(i = 0; i < tam; i++){
        if(a[i].sexo == 'f'){
            if(a[i].idade < menor){
                menor = a[i].idade;
            }
        }
    }
    return menor;
}
