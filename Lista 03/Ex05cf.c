#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//código com a função strcat

#define tam 100

int main(){
  char str1[tam];
  char str2[tam];

  printf("Digite a primeira frase: ");
  fgets(str1,tam,stdin);

  printf("Digite a segunda frase: ");
  fgets(str2,tam,stdin);

 strcat(str1,str2);

  printf("%s",str1);

  return 0;
  }