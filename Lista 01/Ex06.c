#include <stdio.h>

int main() {
  float altura,peso;
  int genero;

printf("Qual a sua altura em metros?\n");
scanf("%f",&altura);

printf("\n1-masculino\n2-feminino\n");
puts("Digite o número correspondente ao seu gênero");

if(genero == 1){
peso=72.7*altura-58;
printf("O seu peso ideal é %.1f",peso);
}
peso=62.1*altura-44.7;
printf("O seu peso ideal é %.1f",peso);

return 0;
}