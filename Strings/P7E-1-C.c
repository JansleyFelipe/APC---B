#include <stdio.h>
#include <string.h>

int main(){
  char s1[11], s2[11], s3[11], aux[11];
  int i;
  printf("Escreva a primeira string: \n");
  fflush(stdin);
  gets(s1);
  printf("Escreva a segunda string: \n");
  fflush(stdin);
  gets(s2);
   if(strcmp(s1, s2) > 0){
        strcpy(aux,s2);
        strcpy(s2,s1);
        strcpy(s1,aux);
  }
  printf("Escreva a terceira string: \n");
  fflush(stdin);
  gets(s3);

  if(strcmp(s1, s3) > 0){
        strcpy(aux,s3);
        strcpy(s3,s1);
        strcpy(s1,aux);
  }
  else{
      if(strcmp(s2, s3) > 0){
        strcpy(aux,s3);
        strcpy(s3,s2);
        strcpy(s2,aux);
  }

  }
  printf("\n");
  puts(s1);
  puts(s2);
  puts(s3);

  return 0;
}
