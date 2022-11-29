#include <stdio.h>

int main(void) {
int num_horas,percentual_desconto;
float hora_aula,salário_bruto,salário_liquido;

printf("Digite o valor da hora aula: ");
scanf("%f",&hora_aula);

printf("Digite a quantidade de horas trabalhadas no mês: ");
scanf("%d",&num_horas);

printf("Digite o atual percentual de desonto do INSS: ");
scanf("%d",&percentual_desconto);

  
salário_bruto= hora_aula*num_horas;
printf("\nO salário bruto corresponde a R$%.2f",salário_bruto);

salário_liquido= salário_bruto-(salário_bruto * percentual_desconto / 100);
printf("\nO salário líquido corresponde a R$%.2f",salário_liquido);

  return 0;
}