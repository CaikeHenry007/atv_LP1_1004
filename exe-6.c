#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "UTF-8");
    
    int matriz[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matriz[i][j] = i - j - 1 - 1;
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
            if (i == j && matriz[i][j] < 0)
            {
                matriz[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 2; j > -1; j--)
        {
            if (j + i == 3 - 1 && matriz[i][j] < 0)
            {
                matriz[i][j] = 0;
            }
        }
    }

    printf("Matriz final:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }


    
    return 0;
}