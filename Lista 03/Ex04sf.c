#include <stdio.h>
#include <string.h>
//código sem a função strcmp

#define tam 100

int main(){
  char str1[tam];
  char str2[tam];

  printf("Digite a primeira frase: ");
  fgets(str1,tam,stdin);

  printf("Digite a segunda frase: ");
  fgets(str2,tam,stdin);


  for(int i=0;i<strlen(str1);i++){
    if(str1[i]!=str2[i]){
      printf("As strings são diferentes!");
      return 1;
    }
  }
  printf("As strings são iguais!");

  return 0;
  }