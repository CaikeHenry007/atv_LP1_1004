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


    int temp = matriz[0][0];
    matriz[0][0] = matriz[2][2];
    matriz[2][2] = temp;

 
    temp = matriz[0][2];
    matriz[0][2] = matriz[2][0];
    matriz[2][0] = temp;

   
    printf("\nMatriz com diagonais invertidas:\n");
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
