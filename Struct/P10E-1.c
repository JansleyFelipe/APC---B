#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Leitura(Pessoa a[]);
void Maioralt(Pessoa a[], int *m);
void MenorPeso(Pessoa a[], int *MP);
void MediaIdades(Pessoa a[], int *idades, float *media);

struct pessoa{
    char nome[50];
    float altura, peso;
    int idade;
};
typedef struct pessoa Pessoa;

#define tam 30
int main(){
    int maior, menorP, media, idades;
    Pessoa v[tam];

    Leitura(v);
    Maioralt(v, &maior);
    printf("%s possui a maior altura que eh %.2f\n", a[maior].nome, a[maior].altura);
    MenorPeso(v, &menorP);
    printf("%s possui o menor peso que eh %.2f\n", a[menorP].nome, a[menorP].peso);
    MediaIdades(v, &idades, &media);
    printf("A media das idades eh: %.2f\n", media);

    return 0;
}

void Leitura(Pessoa a[]){
    int i;
    for(i = 0; i < tam; i++){
        system("cls");
        printf("\nPessoa %d", i);
        fflush(stdin);
        printf("\n Nome:");
        gets(a[i].nome);
        printf("\n Peso:";
        scanf("%f", a[i].peso);
        printf("\n Altura:");
        scanf("%f", a[i].altura);
        printf("\n Idade:");
        scanf("%d", a[i].idade);

    }
}

void Maioralt(Pessoa a[], int *m){
    int i;
    maior = a[0].altura;
    *m = 0;
    for(i = 0; i < tam; i++){
        if(a[i].altura > maior){
            maior = a[i].altura
            *m = i;
        }
    }
}

void MenorPeso(Pessoa a[], int *MP){
    int i, menorP;
    menorP = a[0].peso;
    *MP = 0;
    for(i = 0; i < tam; i++){
        if(a[i].peso < menorP){
            menorP = a[i].peso;
            *MP = i;
        }
    }
}

void MediaIdades(Pessoa a[], int *idades, float *media){
    int i;
    for(i = 0; i < tam; i++){
        *idades += a[i].idade;
    }
    *media = *idade/tam;
}
