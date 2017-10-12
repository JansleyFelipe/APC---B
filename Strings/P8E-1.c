#include <stdio.h>
#include <stdlib.h>
int main()
{
int *x,*y, **t,*v, i,n;
printf("Qual sera o tamanho do vetor?\n");
scanf("%d",&n);
v=(int*)malloc(n*sizeof(int));
x=(int*)malloc(sizeof(int));
y=(int*)malloc(sizeof(int));
*x=5;
*y=15;
t=&x;
**t+=20;
*y=*y%2;
*x+=13;

for(i=0; i<n;i++)
{
v[i]=2*i;
}
system("cls");

printf("\n\nPRIMEIROS RESULATADOS:\n");
printf("\n\tx = %d \n",x);
printf("\n\t*x = %d \n",*x);
printf("\n\t&x = %d \n",&x);
printf("\n\ty = %d \n",y);
printf("\n\t*y = %d \n",*y);
printf("\n\t&y = %d \n",&y);
printf("\n\tt = %d \n",t);
printf("\n\t**t = %d \n",**t);
printf("\n\t*t = %d \n",*t);
printf("\n\t&t = %d \n",&t);
printf("digite algo...");
fflush(stdin);
getchar();

system("cls");
printf("\n\tVETORES:\n");

for(i=0; i<n;i++)
{
    printf("\n\tv[i]= %d endereco de v[i]= %d",v[i], &v[i]);
}
printf("\n\n\tdigite algo...");
fflush(stdin);
getchar();
}
