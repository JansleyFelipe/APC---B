#include <stdio.h>
#include <time.h>


int main(){
    #define tam 10
    int i, j, V[tam], aux;
    srand(time(NULL));
    
    for(i = 0; i < tam; i++){
        V[i] = rand() % 9 + 0;
    }
    for(i = 0; i < tam; i++){
        printf("%d ", V[i]);
    }
    printf("\n\n");
    for(i = 0; i < tam; i++){
         for(j = 0; j < tam; j++){
            if(V[i] > V[j]){
                aux = V[j];
                V[j] = V[i];
                V[i] = aux;
            }
        }

    }
    for(j = 0; j < tam; j++){
        printf("%d ", V[j]);
    }
    return 0;
}