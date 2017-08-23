#include <stdio.h>

int main(){
    int n, i, primo = 0, j;
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
       for(j  = i - 1; j > 1; j--){
            if(i%j == 0){
                primo = 1;
            }
       }
       if(!(primo|| i == 1)){
            printf("%d\n", i);
        }
    }
    return 0;
}
