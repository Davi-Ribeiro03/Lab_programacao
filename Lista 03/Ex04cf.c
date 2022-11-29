#include <stdio.h>
#include <string.h>
//código com a função strcmp

#define tam 100

int main(){
  char str1[tam];
  char str2[tam];

  printf("Digite a primeira frase: ");
  fgets(str1,tam,stdin);

  printf("Digite a segunda frase: ");
  fgets(str2,tam,stdin);


  if(strcmp(str1,str2)==0)printf("As strings são iguais!");
  else printf("As strings não são iguais!");
  
}