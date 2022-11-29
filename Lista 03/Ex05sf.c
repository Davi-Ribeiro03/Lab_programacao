#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//código sem a função strcat

#define tam 100

int main(){
  char str1[tam];
  char str2[tam];
  char str3[tam];

  printf("Digite a primeira frase: ");
  fgets(str1,tam,stdin);

  printf("Digite a segunda frase: ");
  fgets(str2,tam,stdin);

 
  for(int i=0;i<strlen(str1);i++){
    str3[i]=str1[i];
    }
  for(int i=0;i<strlen(str2);i++){
    str3[strlen(str1)-1+i]=str2[i];
    }

  str3[strlen(str1)+strlen(str2)-1]='\0';
  printf("%s",str3);

  return 0;
  }