#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define n 10

struct dados {
    int a, b, c;
};

typedef struct dados Dados;

void lerCoef(int *a, int *b, int *c) {
    printf("A: ");
    scanf("%d", &*a);
    printf("B: ");
    scanf("%d", &*b);
    printf("C: ");
    scanf("%d", &*c);
    system("cls");
}

int calcularDelta(int a, int b, int c) {
    int delta = b*b - 4*a*c;
    return delta;
}

int main() {
    Dados d[n];
    int i;
    for(i = 0; i < n; i++) {
        lerCoef(&d[i].a, &d[i].b, &d[i].c);

        if(d[i].a > 1) {
            printf("%d", d[i].a);
        }
        printf("x^2");
        if(!d[i].b == 0) {
            if(d[i].b > 0) {
                printf("+");
            }
            if(d[i].b > 1) {
                printf("%d", d[i].b);
            }
            printf("x");
        }
        if(!d[i].c == 0) {
            if(d[i].c > 0) {
                printf("+");
            }
            printf("%d", d[i].c);
        }
        printf(" = 0\n");

        int delta = calcularDelta(d[i].a, d[i].b, d[i].c);

        if(delta < 0) {
            printf("Nao existem raizes reais.\n");
        } else{
            float x1 = (-d[i].b + sqrt(delta))/2*d[i].a;
            float x2 = (-d[i].b - sqrt(delta))/2*d[i].a;

            if(x1 == x2) {
                printf("Ha somente uma raiz, que e %.2f\n", x1);
            } else {
                printf("Primeira raiz = %.2f\n", x1);
                printf("Segunda raiz = %.2f\n", x2);
            }
        }
        system("pause");
        system("cls");
    }

    return 0;
}
