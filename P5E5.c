#include <stdio.h>

int main(){
    #define tam 10
    int i, j, x[tam], y[tam], k;

    for(i = 0;i < tam; i++){
        scanf("%d", &x[i]);
    }
    for(j = 0; j < tam; j++){
        scanf("%d", &y[j]);
    }
    k = 0;
    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            if(x[i] == y[j]){
                k++;
        }
    }
    }printf("\n\nOs vetores possui %d elementos iguais\n", k);
    return 0;
}
