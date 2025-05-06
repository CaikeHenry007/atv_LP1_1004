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
            if(i == 0 && j == 0){
                matriz[i][j] = 1;
            } else {
                matriz[i][j] = i + j;
            }
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i == 0 && j > 0)
            {
                matriz[i][j] = 0;
            }

            if (i == 1 && j > 1)
            {
                matriz[i][j] = 0;
            }

            if (i == 2 && j > 2)
            {
                matriz[i][j] = 0;
            }
        }
    }

    printf("Matriz transformada em triangular inferior: \n\n");

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}