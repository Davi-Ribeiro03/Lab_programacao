#include <stdio.h>

# define valor_diária 50.25


int main() {

int dia;
float salário_bruto,salário_liquido;

printf("Digite a quantidade de dias trabalhados: ");
scanf("%d",&dia);

salário_bruto = dia*valor_diária;

salário_liquido = salário_bruto - (salário_bruto * 10/100);
  
if(dia < 10){
printf("\nO valor total a ser pago, deve ser R$%.2f",salário_liquido);
}
else if(dia >= 10 && dia < 20){
  salário_liquido+=(salário_liquido*20/100);
printf("\nO valor total a ser pago, deve ser R$%.2f",salário_liquido);
}
else if(dia >= 20){
  salário_liquido+=(salário_liquido*30/100);
printf("\nO valor total a ser pago, deve ser R$%.2f",salário_liquido);
}
  return 0;
}