
  
#include <stdio.h>
#include <stdlib.h>

#define tam 1000

int main(){
 char string[tam];
 char c;
 int count=0;

  printf("Digite uma frase: ");
  scanf("%100[^\n]",string);

  printf("Digite um caracter qualquer: ");
  scanf(" %c",&c);

  for(int i=0;i<20;i++){
     if(c == string[i]){
      printf("[%s] contém o caracter [%c]",string,c);
      count++;
      break;
   }
  }
  if(count==0)  printf("[%s] não contém o caracter [%c]",string,c);
}
  