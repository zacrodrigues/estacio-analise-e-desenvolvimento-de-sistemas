#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void movimentoRecursivo(int qtdDeCasasPecorridas, int qtdLimiteDeMovimentos, char *direcao)
{
    if (qtdDeCasasPecorridas < qtdLimiteDeMovimentos)
    {
        printf("%s\n", direcao);
        movimentoRecursivo(qtdDeCasasPecorridas + 1, qtdLimiteDeMovimentos, direcao);
    }
}

void movimentoRecursivoBispo(int qtdCasasPecorridas, int qtdLimiteDeMovimentos)
{
    if (qtdCasasPecorridas < qtdLimiteDeMovimentos)
    {
        for (int i = 0; i < 1; i++)
        {
            printf("Cima ");
            for (int j = 0; j < 1; j++)
            {
                printf("Direita\n");
            }
        }
        movimentoRecursivoBispo(qtdCasasPecorridas + 1, qtdLimiteDeMovimentos);
    }
}

int main()
{
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int qtdLimiteMovimentoBispo = 5;
    int qtdLimiteMovimentoTorre = 5;
    int qtdLimiteMovimentoRainha = 8;
    int qtdCasasPecorridasTorre = 0;
    int qtdCasasPecorridasRainha = 0;
    int qtdLimiteMovimentoCavalo = 3;
    int qtdLimiteMovimentoVerticalCavalo = 2;
    int qtdLimiteMovimentoHorizontalCavalo = 1;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    // printf("*** Movimentação do Bispo ***\n");

    // for (int i = 0; i < qtdLimiteMovimentoBispo; i++)
    // {
    //     printf("Cima Direita\n");
    // }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    // printf("\n*** Movimentação da Torre ***\n");

    // while (qtdCasasPecorridasTorre < qtdLimiteMovimentoTorre)
    // {
    //     printf("Direita\n");
    //     qtdCasasPecorridasTorre++;
    // }

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    // printf("\n*** Movimentação da Rainha ***\n");

    // do
    // {
    //     printf("Esquerda\n");
    //     qtdCasasPecorridasRainha++;
    // } while (qtdCasasPecorridasRainha < qtdLimiteMovimentoRainha);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    // printf("\n------------------------------\n");
    // printf("\n*** Movimentação do Cavalo ***\n");

    // for (int i = 0; i < qtdLimiteMovimentoVerticalCavalo; i++)
    // {
    //     printf("Cima ");

    //     int qtdCasasVerticaisPecorridasCavalo = i;

    //     while (qtdCasasVerticaisPecorridasCavalo == qtdLimiteMovimentoHorizontalCavalo)
    //     {
    //         printf("Esquerda\n");
    //         qtdCasasVerticaisPecorridasCavalo++;
    //     }
    // }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.
    printf("*** Movimentação do Bispo ***\n");
    movimentoRecursivoBispo(0, qtdLimiteMovimentoBispo);

    printf("\n*** Movimentação da Torre ***\n");
    movimentoRecursivo(0, qtdLimiteMovimentoTorre, "Direita");

    printf("\n*** Movimentação da Rainha ***\n");
    movimentoRecursivo(0, qtdLimiteMovimentoRainha, "Esquerda");

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
    printf("\n*** Movimentação do Cavalo ***\n");

    for (int i = 0, j = 0; i < qtdLimiteMovimentoCavalo; i++)
    {
        for (j = 0; j < 2; j++, i++)
        {
            printf("Cima ");
        }
        printf("Direita\n");
    }

    return 0;
}
