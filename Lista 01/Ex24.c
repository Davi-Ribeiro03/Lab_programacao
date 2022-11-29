#include <stdio.h>

int main(void) {
  int x, n, produto, expoente;

  printf("Digite o primeiro valor: ");
  scanf("%d", &x);
  printf("Digite o valor do expoente: ");
  scanf("%d", &expoente);

  if (expoente == 0) {
    n = 1;
  } else {
    n = 1 << expoente;
  }

  produto = x * n;

  printf(" %d x 2^%d = %d", x, expoente, produto);
  return 0;
}