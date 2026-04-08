#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  srand(time(0));
  int numeroJogador, numeroComputador, opcao;
  char *resultado;

  printf("*** Jogo Maior, Menor ou Igual ***\n");
  printf("1. Maior\n");
  printf("2. Menor\n");
  printf("3. Igual\n");
  printf("Escolha uma opção: ");
  scanf("%d", &opcao);

  if (opcao != 1 && opcao != 2 && opcao != 3)
  {
    printf("Opção inválida!\n");
    return 0;
  }

  printf("\nDigite seu número: ");
  scanf("%d", &numeroJogador);

  if (numeroJogador < 0 || numeroJogador > 100)
  {
    printf("Número inválido!\n");
    return 0;
  }

  numeroComputador = rand() % 100;

  printf("\n*** Números Escolhidos ***\n");
  printf("Jogador: %d\n", numeroJogador);
  printf("Computador: %d\n", numeroComputador);

  switch (opcao)
  {
  case 1:
    printf("\nVerificando número maior...\n");

    if (numeroJogador > numeroComputador)
    {
      resultado = "Parabéns! Você ganhou.\n";
    }
    else
    {
      resultado = "Não foi dessa vez! Tente novamente.\n";
    }

    break;
  case 2:
    printf("\nVerificando número menor...\n");

    if (numeroJogador < numeroComputador)
    {
      resultado = "Parabéns! Você ganhou.\n";
    }
    else
    {
      resultado = "Não foi dessa vez! Tente novamente.\n";
    }

    break;
  case 3:
    printf("\nVerificando número igual...\n");

    resultado = numeroJogador == numeroComputador ? "Parabéns! Você ganhou.\n" : "Não foi dessa vez! Tente novamente.\n";

    break;
  }

  printf("%s", resultado);

  return 0;
}