#include <stdio.h>

int main(){
    #define tam 10
    int i, x,a[tam], y;
    scanf("%d", &x);
    for(i = 0;i < tam; i++){
        scanf("%d", &a[i]);
        if(x){
            y = 1;
        }
    }
    if(y == 1){
        printf("%d existe no vetor A\n", x);
    }
    return 0;
}
