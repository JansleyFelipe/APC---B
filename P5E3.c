#include <stdio.h>
#define max 5

int main(){
    int i , x[max], y, j;
    for(i = 0; i < max; i++){
        scanf("%d", &x[i]);
    }
    for(i = 0;i < max;i++){
        y = 0;
        for(j = 0;j <= 10;j++){
            printf("%d x %d = %d\n", x[i], y, x[i] * y);
            y++;
        }
    }
    return 0;
}
