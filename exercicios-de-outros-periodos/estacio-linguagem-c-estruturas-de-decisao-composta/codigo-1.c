#include <stdio.h>

int main() {
  int numero1;
  int numero2;

  numero1 = 10;
  numero2 = 10;

  if (numero1 >= numero2) {
    // bloco de código a ser executado se a condição for verdadeira
    printf("O número 1 é maior ou igual ao número 2\n");
  } else {
    // bloco de código a ser executado se a condição for falsa
    printf("O número 1 é menor que o número 2\n");
  }
}