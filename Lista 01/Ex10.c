#include <stdio.h>

int main() {
float comp,larg,alt,vol;

printf("Digite o comprimento da caixa em cm: ");
  scanf("%f",&comp);
printf("Digite a largura da caixa em cm: ");
  scanf("%f",&larg);
printf("Digite a altura da caixa em cm: ");
  scanf("%f",&alt);

  vol=comp*larg*alt;

  printf("\n O volume da caixa é %.2f cm^2",vol);
  return 0;
}
