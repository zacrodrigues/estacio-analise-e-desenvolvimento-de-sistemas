#include <stdio.h>

int main() {
  // O array de nomes não foi especificado o tamanho do array porque,
  // como ele foi inicializado com três nomes, automaticamente ele é
  // definido com tamanho 3

  // O asteriscos antes da palabra nomes, é uma indicação de ponteiros
  // Ele é necessário para criar um array de strings
  char *nomes[] = {"Alice", "Bob", "Carol"};

  for(int i = 0; i < 3; i++) {
    printf("%s\n", nomes[i]);
  }

  return 0;
}
