#include <stdio.h>

main()
{
	int i=0, contador = 0, gabarito[40], respostas[40];

	for(i = 0; i < 40; i++) {
		printf("Digite a resposta correta do gabarito. \n");
		printf("1 - A \n");
		printf("2 - B \n");
		printf("3 - C \n");
		printf("4 - D \n");
		scanf("%d", &gabarito[i]);
	}
	for(i = 0; i < 40; i++) {
		printf("Digite a resposta do candidato. \n");
		printf("1 - A \n");
		printf("2 - B \n");
		printf("3 - C \n");
		printf("4 - D \n");
		scanf("%d", &respostas[i]);
		
		if(respostas[i] == gabarito[i]) {
		    contador ++;
		}
	}
	
	printf("Quantidade de acertos: \n %d", contador);

}
