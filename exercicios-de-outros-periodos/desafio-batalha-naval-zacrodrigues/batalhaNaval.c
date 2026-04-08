#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main()
{
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
    char colunas[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    int tabuleiro[10][10];

    // Loop criando o tabuleiro
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            // Colocando navio na posição D2 a F2
            if (i == 2 && (j == 3 || j == 4 || j == 5))
            {
                tabuleiro[i][j] = 3;
                continue;
            }

            // Colocando navio na posição H5 a H7
            if ((i == 5 || i == 6 || i == 7) && j == 7)
            {
                tabuleiro[i][j] = 3;
                continue;
            }

            // Definindo o valor de 0 para a água
            tabuleiro[i][j] = 0;
        }
    }

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            // Colocando navio na diagonal principal de C2 a E4
            if ((i == 2 || i == 3 || i == 4) && i == j)
            {
                tabuleiro[i][j] = 3;
            }

            // Colocando navio na diagonal secundária de I1 a G3
            if ((i == 1 || i == 2 || i == 3) && (i + j) == 9)
            {
                tabuleiro[i][j] = 3;
            }
        }
    }

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    printf("\n*** Habilidade Cone ***\n\n");

    int matrizCone[3][5];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            matrizCone[i][j] = 0;

            if (i == 0 && j == 2)
            {
                matrizCone[i][j] = 1;
            }

            if (i == 1 && (j == 1 || j == 2 || j == 3))
            {
                matrizCone[i][j] = 1;
            }

            if (i == 2)
            {
                matrizCone[i][j] = 1;
            }

            printf("%d ", matrizCone[i][j]);
        }

        printf("\n");
    }

    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0
    printf("\n*** Habilidade Octaedro ***\n\n");

    int matrizOctaedro[3][5];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            matrizOctaedro[i][j] = 0;

            if (i == 0 && j == 2)
            {
                matrizOctaedro[i][j] = 1;
            }

            if (i == 1 && (j == 1 || j == 2 || j == 3))
            {
                matrizOctaedro[i][j] = 1;
            }

            if (i == 2 && j == 2)
            {
                matrizOctaedro[i][j] = 1;
            }

            printf("%d ", matrizOctaedro[i][j]);
        }

        printf("\n");
    }

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0
    printf("\n*** Habilidade Cruz ***\n\n");

    int matrizCruz[3][5];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            matrizCruz[i][j] = 0;

            if (i == 0 && j == 2)
            {
                matrizCruz[i][j] = 1;
            }

            if (i == 1)
            {
                matrizCruz[i][j] = 1;
            }

            if (i == 2 && j == 2)
            {
                matrizCruz[i][j] = 1;
            }

            printf("%d ", matrizCruz[i][j]);
        }

        printf("\n");
    }

    // Colocando a habilidade de cone no tabuleiro
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i == 7 && j == 2)
            {
                tabuleiro[i][j] = 5;
            }

            if (i == 8 && (j == 1 || j == 2 || j == 3))
            {
                tabuleiro[i][j] = 5;
            }

            if (i == 9 && j < 5)
            {
                tabuleiro[i][j] = 5;
            }
        }
    }

    // Colocando a habilidade de octaedro no tabuleiro
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i == 7 && j == 8)
            {
                tabuleiro[i][j] = 5;
            }

            if (i == 8 && j > 6)
            {
                tabuleiro[i][j] = 5;
            }

            if (i == 9 && j == 8)
            {
                tabuleiro[i][j] = 5;
            }
        }
    }

    // Colocando a habilidade de cruz no tabuleiro
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i == 5 && j == 4)
            {
                tabuleiro[i][j] = 5;
            }

            if (i == 6 && j > 1 && j < 7)
            {
                tabuleiro[i][j] = 5;
            }

            if (i == 7 && j == 4)
            {
                tabuleiro[i][j] = 5;
            }
        }
    }

    // Loop para imprimir tabuleiro
    printf("*** Tabuleiro ***\n\n");

    for (int i = 0; i < 10; i++)
    {
        // Se o loop estiver passando pela primeira linha do tabuleiro
        // irá imprimir a referência das colunas em letras
        if (i == 0)
        {
            // Loop imprimindo a letra de cada coluna
            for (int colunaIndex = 0; colunaIndex < 10; colunaIndex++)
            {
                // Dá um espaço a esquerda para alinhar a letra com a coluna do
                // tabuleiro
                if (colunaIndex == 0)
                {
                    printf("    ");
                }

                // Imprime a letra da coluna do tabuleiro
                printf("%c ", colunas[colunaIndex]);
            }

            printf("\n");

            // Colocando linha de separação entre as colunas e os campos do
            // tabuleiro
            for (int linha = 0; linha < 23; linha++)
            {
                printf("-");
            }

            printf("\n");
        }

        // Imprime o número da linha com separador antes de imprimir os campos
        // do tabuleiro
        printf("%d | ", i);

        // Loop para imprimir os campos do tabuleiro
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", tabuleiro[i][j]);
        }

        printf("\n");
    }

    return 0;
}
