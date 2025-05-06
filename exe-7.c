#include <stdio.h>

int main()
{

    int distancia[6][6] = {
        {0, 63, 210, 190, 190, 190},
        {63, 0, 160, 150, 95, 80},
        {210, 160, 0, 10, 999, 999},
        {190, 150, 10, 0, 999, 999},
        {190, 95, 999, 999, 0, 80},
        {190, 80, 999, 999, 80, 0}};

    int rota[] = {2, 3, 1, 4, 5, 0};
    int tamanhoRota = sizeof(rota) / sizeof(rota[0]);

    int distanciaTotal = 0;

    for (int i = 0; i < tamanhoRota - 1; i++)
    {
        int origem = rota[i];
        int destino = rota[i + 1];
        distanciaTotal += distancia[origem][destino];
    }

    printf("Distância total percorrida na viagem: %d km\n", distanciaTotal);

    return 0;
}
