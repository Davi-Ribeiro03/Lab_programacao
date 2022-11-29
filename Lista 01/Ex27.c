#include <stdio.h>
#include <math.h>

#define qtd 3

int main(void) {
  float ma,mg,x1,x2,x3;

  puts("Digite o valor do primeiro número: ");
    scanf("%f",&x1);
  puts("Digite o valor do segundo número: ");
    scanf("%f",&x2);
  puts("Digite o valor do terceiro número: ");
    scanf("%f",&x3);

  ma = (x1*x2*x3)/3;
  mg = pow((x1*x2*x3),1.0/qtd);

  printf("A média aritmética é %.2f.\nA média geométrica é %.2f.",ma,mg);
  return 0;
}