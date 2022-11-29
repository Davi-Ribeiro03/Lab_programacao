#include <stdio.h>

int main(void) {
  int num,inverso;
  
  printf("Digite um número de 03 dígitos: ");
  scanf("%d",&num);

while(num!=0){

  inverso=num % 10;
  printf("%d",inverso);
  num/=10;
  }
  
  return 0;
}