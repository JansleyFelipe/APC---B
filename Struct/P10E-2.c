#include <stdio.h>
#include <stdlib.h>

struct alunos{
    float media;
    int idade;

};
typedef struct alunos alunos;

#define tam 3
void Leitura(alunos a[]);
void IdadeMedia(alunos a[], int *Imaior, int *Imenor);
float MediaSala(alunos a[]);
void PercentualAlunos(alunos a[], float mediasala, float *percentual);

int main(){
    alunos v[tam];
    int idademaior, idademenor;
    float mediasala, percentual = 0;

    Leitura(v);
    IdadeMedia(v, &idademaior, &idademenor);
    printf("\n A idade do aluno com maior media eh: %d anos", idademaior);
    printf("\n A idade do aluno com menor media eh: %d anos", idademenor);
    mediasala = MediaSala(v);
    printf("\n A media da sala eh: %.1f", mediasala);
    PercentualAlunos(v, mediasala, &percentual);
    printf("\n O percentual de alunos que possui a media maior que a media da sala eh: %%%.1f\n\n", percentual);

    return 0;
}

void Leitura(alunos a[]){
    int i;
    for(i = 0; i < tam; i++){
        //system("clear");
        printf("\n Aluno: %d", i);
        printf("\n\n Media: ");
        scanf("%f", &a[i].media);
        printf("\n\n Idade: ");
        scanf("%d", &a[i].idade);
    }
}

void IdadeMedia(alunos a[], int *Imaior, int *Imenor){
    int i;
    float maior = 0, menor = 0;
    *Imaior = a[0].idade;
    *Imenor = a[0].idade;
    for(i = 0; i < tam; i++){
        if(a[i].media > maior){
            *Imaior = a[i].idade;
            maior = a[i].media;
        }
        if(a[i].media < menor){
            *Imenor = a[i].idade;
            menor = a[i].media;
        }
    }
}

float MediaSala(alunos a[]){
    int i;
    float m = 0, media;
    for(i = 0; i < tam; i++){
        m += a[i].media;
    }
    return media = m/tam;
}

void PercentualAlunos(alunos a[], float mediasala, float *percentual){
    int i, count = 0;
    for(i = 0; i < tam; i++){
        if(a[i].media > mediasala){
            count++;
        }
    }
    *percentual = (float)count/tam;
   }
