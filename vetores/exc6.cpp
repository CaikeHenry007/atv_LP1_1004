#include <stdio.h>

main()
{
	int i=0;
	float valor[3], totalvendedor[3], quantidade[3], total = 0;

	for(i = 0; i < 3; i++) {
		printf("Digite a quantidade de pecas vendidas. \n");

		scanf("%f", &quantidade[i]);

		printf("Digite o valor do produto. \n");

		scanf("%f", &valor[i]);

		totalvendedor[i] = quantidade[i] * valor[i];
		total += totalvendedor[i];
	}

	printf("As vendas totais de cada vendedor: \n");

	for(i = 0; i < 3; i++) {
		printf("%.2f \n", totalvendedor[i]);
	}

	printf("As vendas totais da loja: %.2f \n", total);
}
