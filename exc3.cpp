#include <stdio.h>

main()
{
	int i=0;
	float  notas[20], notasmaiores[20];

	for(i = 0; i < 20; i++) {
		printf("Digite a nota: \n");
		scanf("%f", &notas[i]);

		if (notas[i] >= 7.5) {
			notasmaiores[i] = notas[i];
		}
	}
	
	printf("Notas maiores do que 7.5 \n");
	for(i = 0; i < 20; i++) {
		printf("%.1f \n", notasmaiores[i]);
	}
}
