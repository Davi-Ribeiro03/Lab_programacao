#include <stdio.h>

int main() {
int a=0,b=1; //a=0000 b=0001
  
a= a ^ b; //0001
b= a ^ b; //0000
a= a ^ b; //0001

  printf("a = %d e b = %d",a,b);
  return 0;
}