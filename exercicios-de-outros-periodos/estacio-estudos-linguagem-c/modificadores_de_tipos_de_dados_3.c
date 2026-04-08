#include  <stdio.h>

int main() {
  printf("Tamanho de int: %lu bytes\n", sizeof(int));
  printf("Tamanho de long int: %lu bytes\n", sizeof(long int));
  printf("Tamanho de long lont int: %lu bytes\n", sizeof(long long int));
  printf("Tamanho de double: %lu bytes\n", sizeof(double));
  printf("Tamanho de long double: %lu bytes\n", sizeof(long double));
  return 0;
}