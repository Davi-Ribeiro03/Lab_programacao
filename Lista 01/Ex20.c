#include <stdio.h>

int main(void) {
  int num;
  
  printf("Digite um número inteiro: ");
  scanf("%d",&num);

  num % 2? printf("%d é ímpar",num) : printf("%d é par",num);
  
  return 0;
}