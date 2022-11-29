#include <stdio.h>

int main(void) {
int num1,num2;

printf("Digite o primeiro número inteiro: ");
scanf("%d",&num1);
printf("Digite o segundo número inteiro: ");
scanf("%d",&num2);

num1 % num2? printf("%d não é multiplo de %d",num1,num2) : printf("\n%d é multiplo de %d",num1,num2) ;
  
return 0;
}