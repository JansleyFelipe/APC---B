#include <stdio.h>

int EhPrimo(int x){
    int i, primo = 0;
    if(x == 2){
        return 1;
    }
    for(i = 2; i < x; i++){
        if(x%i == 0){
             return primo;
        }
        else{
            return 1;
        }
    }

}

int main(){
    int n, primo;
    printf("Digite um inteiro\n");
    scanf("%d", &n);
    primo = EhPrimo(n);

    if(primo == 1){
        printf("%d eh primo\n", n);
    }
    else{
        printf("%d nao eh primo\n", n);
    }

    return 0;
}
