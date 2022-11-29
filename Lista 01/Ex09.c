#include <stdio.h>

int main(void) {
int x,ant,suc;
  
  printf("Digite um valor inteiro: ");
  scanf("%d",&x);

  ant=x-1;
  suc=x+1;

  printf("\n%d < %d < %d",ant,x,suc);
  return 0;
}