#include <stdio.h>
#define max 3

int main(){
    int i, x[i], y[i];

    for(i = 0;i < max; i++){
        scanf("%d", &x[i]);
    }

    for(i = 0;i < max; i++){
        scanf("%d", &y[i]);
    }
    for(i = 0;i < max; i++){
        printf("Soma: %d\n", x[i] + y[i]);
    }
    return 0;
}
