#include <stdio.h>

int main(){
  int tempo,h=0,m=0,s=0;

  printf("Digite o tempo em segundos: ");
  scanf("%d",&tempo);

    if(tempo > 60){
      s = tempo % 60;
      m = tempo / 60;
    }else{ s=tempo; }

    if(m > 60){
      h = m / 60;
      m = m % 60;
    }

  printf("%d Segundos possui: %d hrs %d min %d seg ",tempo,h,m,s);
  
  return 0;
}