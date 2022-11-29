#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define tam 100

int main(){
  char str[tam];
  char ctr[tam];
  int count=0;

  printf("Digite a primeira frase: ");
  fgets(str,tam,stdin);

  for(int i=strlen(str)-1;i>=0;i--){
    ctr[count]=str[i];
    count++;
    }

   printf("%s",ctr);
  return 0;
  }