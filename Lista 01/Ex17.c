#include <stdio.h>

int main(void) {
int x;

printf("Digite um valor inteiro: ");
scanf("%d",&x);

x= x<0? x*(-1):x;

printf("%d",x);
  
  return 0;
}