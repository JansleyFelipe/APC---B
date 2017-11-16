#include <stdio.h>
#define max 5

int main(){
    int i, x[max];
    for(i = 1;i <= max;i++){
        scanf("%d", &x[i]);
    }
    for(i = max;i >= 1;i--){
        printf("%d ", x[i]);
    }
    return 0;
}
