#include <stdio.h>
#include <stdlib.h>

struct alunos{
    float media;
    int idade;

};
typedef struct alunos alunos;

#define tam 3
void Leitura(alunos a[]);
void IdadeMedia(alunos a[], int *idademaior, int *idademenor);
float MediaSala(alunos a[]);
void PercentualAlunos(alunos a[], float mediasala, float *percentual);

int main(){
    alunos v[tam];
    int idademaior = v[0].idade, idademenor = v[0].idade;
    float mediasala, percentual = 0;

    Leitura(v);
    IdadeMedia(v, &idademaior, &idademenor);
    printf("\n A idade do aluno com maior media eh: %d anos", idademaior);
    printf("\n A idade do aluno com menor media eh: %d anos", idademenor);
    mediasala = MediaSala(v);
    printf("\n A media da sala eh: %.1f", mediasala);
    PercentualAlunos(v, mediasala, &percentual);
    printf("\n O percentual de alunos que possui a media maior que a media da sala eh: %%%.1f", percentual);

    return 0;
}

void Leitura(alunos a[]){
    int i;
    for(i = 0; i < tam; i++){
        system("cls");
        printf("\n Aluno: %d", i);
        printf("\n\n Media: ");
        scanf("%f", &a[i].media);
        printf("\n Idade: ");
        scanf("%d", &a[i].idade);
    }
}

void IdadeMedia(alunos a[], int *idademaior, int *idademenor){
    int i;
    float maior = a[0].media, menor = a[0].media;
    for(i = 0; i < tam; i++){
        if(a[i].media > maior){
            *idademaior = a[i].idade;
        }
        if(a[i].media < menor){
            *idademenor = a[i].idade;
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
    *percentual = count/tam;
}
