#include <stdio.h>

#define TAM 3

int main(){
  int matriz [TAM][TAM];

  printf("Digite os valores que compoẽm a matriz\n");
  
  for(int i=0; i<TAM; i++){
    for(int t=0; t<TAM; t++){
      printf("%dª linha %dª coluna: ",i+1,t+1);
      scanf("%d",&matriz[i][t]);
    }
  }

  printf("\nOs elementos da diagonal principal são:");

  for(int i=0; i<TAM; i++){
    printf("\n%dª linha %dª coluna: %d",i+1,i+1,matriz[i][i]);  
  }

  return 0;
}