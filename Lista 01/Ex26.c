#include <stdio.h>
#include <math.h>

int main() {
  int x,x1,y,y1;
  float d;
  
  printf("Digite o valor da primeira coordenada x: ");
  scanf("%d",&x);
  
  printf("Digite o valor da primeira coordenada y: ");
    scanf("%d",&y);

  printf("Digite o valor da segunda coordenada x: ");
    scanf("%d",&x1);

  printf("Digite o valor da segunda coordenada y: ");
    scanf("%d",&y1);

  d=sqrt( (pow((x1-x),2) + pow((y1-y),2)));

  printf("d = %.2f",d);
  return 0;
}