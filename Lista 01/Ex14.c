#include <stdio.h>

int main() {
int f; //Graus Fahrenheit
int c; //Graus Celsius

printf("Digite a temperatura em graus Celsius: ");
scanf("%d",&c);

f=(9 * c + 160) / 5; //Fórmula de conversão para Fahrenheit

printf("\n%dGraus Celsius corresponde a %dGraus Fahrenheit",c,f);

  return 0;
}