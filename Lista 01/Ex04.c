#include <stdio.h>

int main() {
  int x,triplo,quadrado;
  float meio;

  printf("Digite um valor inteiro:");
  scanf("%d",&x);
  
  triplo= 3 * x;
  meio= x / 2;
  quadrado= x * x;


  printf("O triplo de %d é %d\n",x,triplo);
  printf("A metade de %d é %.1f\n",x,meio);
  printf("O quadrado de %d é %d\n",x,quadrado);
  
}