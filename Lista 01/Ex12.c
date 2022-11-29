#include <stdio.h>

int main() {
int x,y,soma,produto,diferença,resto;
float quociente;
  
printf("Digite o primeiro número:");
  scanf("%d",&x);
printf("Digite o segundo número:");
  scanf("%d",&y);

soma= x+y;
diferença= x-y;
produto= x*y;
quociente= x/y;
resto= x % y;

printf("%d + %d= %d\n",x,y,soma);
printf("%d - %d= %d\n",x,y,diferença);
printf("%d x %d= %d\n",x,y,produto);
printf("%d / %d= %.2f",x,y,quociente);
  
  return 0;
}