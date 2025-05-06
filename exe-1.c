#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "UTF-8");

    int matriz[3][3], X;

    printf("Que valor você deseja encontrar nessa matriz aleatória?: ");
    scanf("\n%d", &X);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matriz[i][j] = i + j;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matriz[i][j] == X)
            {
                return printf("Valor %d encontrado na linha: %d e na coluna %d", X, i, j);
            }
        }
    }

    printf("não encontrado");

    return 0;
}