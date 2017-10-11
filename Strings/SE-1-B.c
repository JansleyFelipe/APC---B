#include <stdio.h>
#include <string.h>

int main(){
  char s1[11], s2[11], s3[11], o1[11], o2[11], o3[11];
  int i;
  printf("Escreva a primeira string: \n");
  fflush(stdin);
  gets(s1);
  printf("Escreva a segunda string: \n");
  fflush(stdin);
  gets(s2);
  printf("Escrev a terceira string: \n");
  fflush(stdin);
  gets(s3);

  if(strcmp(s1, s2) > 0){
    if(strcmp(s2, s3) > 0){
      puts(s3);
    }
    else{
      puts(s2);
    }
  }
  else if(strcmp(s1, s3) > 0){
    puts(s3);
  }
  else{
    puts(s1);
  }
}
  return 0;
}
