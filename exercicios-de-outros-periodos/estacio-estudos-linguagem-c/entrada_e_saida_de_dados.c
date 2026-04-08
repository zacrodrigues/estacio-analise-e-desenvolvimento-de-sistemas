#include <stdio.h>

int main() {
  // Sintaxe do printf
  // printf("texto com formatação", variavel1, variavel2, ...);
  printf("Ola Mundo 2!\n\n");

  // printf("%formato1 %formato2 %formato3", variavel1, variavel2, variavel3);
  // %d imprime um inteiro no formato decimal
  // %i equivalente a %d
  // %f imprime um número de ponto flutuante no formato padrão
  // %e imprime um número de ponto flutuante na notação científica
  // %c imprime um único caractere
  // %s imprime uma cadeia (string) de caracteres
  int idade = 25;
  float altura = 1.75;
  char opcao = 'S';
  char nome[20] = "sergio";

  printf("Altura: %e\n", altura);
  printf("Opção: %c\n", opcao);
  printf("Nome: %s\nIdade: %d\n\n", nome, idade);

  // sintaxe scanf
  // scanf("formato1" "formato2", &variavel1, variavel2, ...)
  int Idade;
  float Altura;
  char Opcao;
  printf("Entre com sua idade e altura\n");
  scanf("%d %f", &Idade, &Altura);
  printf("Idade: %d\n", Idade);
  printf("Altura: %f\n", Altura);
  printf("Entre com a opcao\n");
  scanf(" %c", &Opcao);
  printf("A opção é: %c\n", Opcao);
}