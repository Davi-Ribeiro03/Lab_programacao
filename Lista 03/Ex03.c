#include <stdio.h>
#include <string.h>

#define tam 100

int main() {
  char str[tam];
  int count = 0;

  printf("Digite uma frase: ");
  fgets(str, tam, stdin);

  while (str[count] != '\n') {
    count++;
  }

  printf("A frase possui %d caracteres!", count);
}
