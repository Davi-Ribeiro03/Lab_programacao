#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tam 100
void bolha(int *pv, int TAM);
void selecao(int *pv, int TAM);

int main() {
  int v[tam];
  int x, y; // intervalo
  int menu;
  srand(time(NULL));

  printf("Digite o valor do intervalo inicial do vetor: ");
  scanf("%d", &x);
  printf("Digite o valor do intervalo final do vetor: ");
  scanf("%d", &y);

  printf("Vetor não ordenado:\n");
  for (int i = 0; i < tam; i++) {
    v[i] = x + rand() % (y - x);
    printf("%d\n", v[i]);
  }

  printf("\nPor qual método deseja fazer a ordenação?:\n1-Bolha "
         "2-Seleção\nDigite: ");
  scanf("%d", &menu);

  if (menu == 1) {
    bolha(v, tam);
  } else
    selecao(v, tam);

  return 0;
}

void bolha(int *pv, int TAM) {

  int t;
  for (int k = 1; k < TAM; k++) {
    for (int j = 0; j < TAM - 1; j++) {
      if (pv[j] > *(pv + j + 1)) {
        t = *(pv + j);
        pv[j] = *(pv + j + 1);
        pv[j + 1] = t;
      }
    }
  }
  printf("\nVetor ordenado:\n");
  for (int i = 0; i < TAM; i++) {
    printf("%d\n", *(pv + i));
  }
}

void selecao(int *pv, int TAM) {
  int t;
  for (int k = 0; k < TAM - 1; k++) {
    for (int j = k + 1; j < TAM; j++) {
      if (*(pv + k) > *(pv + j)) {
        t = *(pv + k);
        pv[k] = *(pv + j);
        pv[j] = t;
      }
    }
  }
  printf("\nVetor ordenado:\n");
  for (int i = 0; i < TAM; i++) {
    printf("%d\n", *(pv + i));
  }
}