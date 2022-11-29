
#include <stdio.h>

#define tam 15
void imprimevetor(float *pv,int qtd);

int main(void) {
  float v[tam];
  int menor;
  int maior;

  printf("Digite o 1º número: ");
  scanf("%f",&v[0]);

  menor=v[0];
  maior=v[0];
  
  for(int i=1;i<tam;i++){
    printf("Digite o %dº número: ",i+1);
    scanf("%f",&v[i]);

    menor= menor > v[i]? v[i]:menor;
    maior= maior < v[i]? v[i]:maior;
  }
  imprimevetor(v,tam);

  int soma= maior+menor;
  printf("A soma do maior e do menor vetor é %d",soma);
  
  return 0;
}

void imprimevetor(float *pv,int qtd){

  for(int i=0;i<qtd;i++){
    printf("[%p] %.2f\n",(pv+i),*(pv+i));
  }
}