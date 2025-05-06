#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "UTF-8");

    int matriz[3][3], maior_elemento = 0, soma_diagonal_secundaria = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matriz[i][j] = i + j + 1;
        }
    }

    printf("Matriz original:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j && matriz[i][j] > maior_elemento)
            {
                maior_elemento = matriz[i][j];
            }
        }
    }

    printf("O maior elemento da diagonal principal: %d\n", maior_elemento);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 2; j > -1; j--)
        {
            if (j + i == 3 - 1)
            {
                soma_diagonal_secundaria += matriz[i][j];
            }
        }
    }

    printf("Soma dos elementos da diagonal secundária: %d\n", soma_diagonal_secundaria);

    return 0;
}