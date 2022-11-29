#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 100

int main() {
  int matriz[TAM][TAM];
  int linhas, colunas, x, count = 0;

  printf("Digite a quantidade de linhas: ");
  scanf("%d", &linhas);
  printf("Digite a quantidade de colunas: ");
  scanf("%d", &colunas);
  printf("Digite um valor: ");
  scanf("%d", &x);

  srand(time(NULL));
  
  for (int i = 0; i < linhas; i++) {
    for (int t = 0; t < colunas; t++) {
      matriz[i][t] = rand() % TAM;
      if (x == matriz[i][t])
        count++;
      
      printf("\n%dª linha %dª coluna:%d", i + 1, t + 1, matriz[i][t]);
    }
  }

  printf("\nO valor digitado aparece %d vezes", count);

  return 0;
}