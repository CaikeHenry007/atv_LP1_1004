#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "UTF-8");

    int matriz[4][4];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            matriz[i][j] = i + j;
        }
    }

    printf("Matriz antes da alteração: \n");

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d", matriz[i][j]);
        }

        printf("\n");
    }                                                                                                                                                                                                                                                                                                                                           

    printf("\nMatriz alterada: \n");
    for (int i = 3; i > -1; i--)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d", matriz[j][i]);
        }

        printf("\n");
    }

    

    return 0;
}