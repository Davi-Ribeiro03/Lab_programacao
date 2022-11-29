#include <stdio.h>

int main() {
float dolar,real;

  printf("Digite a cotação do dólar atualmente: ");
  scanf("%f",&dolar);

  printf("Digite o valor em real que deseja converter: ");
  scanf("%f",&real);

dolar=real/dolar;

  printf("%.2f dólares",dolar);
  
  return 0;
}