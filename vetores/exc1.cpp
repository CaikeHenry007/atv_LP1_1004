#include <stdio.h>

main()
{
	int vetor[10], i=0;

	for(i = 0; i < 10; i++) {
		printf("Digite um valor para colocar no vetor. \n");
		scanf("%d", &vetor[i]);

		if (vetor[i] % 2 == 0) {
			vetor[i] = vetor[i] * 1.05;
		} else {
			vetor[i] = vetor[i] * 1.02;
		}
	}
	
	printf("O vetor ficou assim: \n");
	for(i = 0; i < 10; i++) {
		printf("%d \n", vetor[i]);
	}
}
