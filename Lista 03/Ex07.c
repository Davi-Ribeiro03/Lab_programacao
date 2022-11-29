#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Não consegui fazer a média geométrica

#define qtd 3
#define tam 20
#define ini 0

int main() {
  int v[qtd];
  float ma, mg;
  int soma = 0, produto = 1;

  srand(time(NULL));

  for (int i = 0; i < qtd; i++) {
    v[i] = ini + rand() % tam;
    soma += v[i];
    produto *= v[i];
  }

  printf("Vetor:\n\t%d\t%d\t%d\n", v[0], v[1], v[2]);

  mg = pow(produto, 1/qtd);
  ma = (float)soma / qtd;

  printf("A média Aritmética é %.2f", ma);
  printf("A média Geométrica é %.2f", mg);

  return 0;
}