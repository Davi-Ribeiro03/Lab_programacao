#include <stdio.h>

int main() {
int x,y,z,seg;


  
  printf("Digite a quantidade de horas:");
  scanf("%d",&x);
  
  printf("Digite a quantidade de minutos:");
  scanf("%d",&y);
  
  printf("Digite a quantidade de segundos:");
  scanf("%d",&z);

 x*=60*60;
 y*=60;
 seg=x+y+z;

printf("\n%d segundos",seg);
  
  return 0;
}