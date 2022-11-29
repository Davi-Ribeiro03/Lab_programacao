#include <stdio.h>

int main(void) {
int x;

  printf("Digite o valor da conta:");
  scanf("%d",&x);

  x+=(x*0.1);

  printf("O valor total a ser pago é %d",x);
}