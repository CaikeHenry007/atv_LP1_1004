#include <stdio.h>

main()
{
	int i=0, quantidade = 0;
	float  notas[20];

	for(i = 0; i < 20; i++) {
		printf("Digite a nota: \n");
		scanf("%f", &notas[i]);

		if (notas[i] >= 7.5) {
			quantidade ++;
		}
	}
	
	printf("Quantidade de notas maiores do que 7.5 \n");
	printf("%d \n", quantidade);
}
