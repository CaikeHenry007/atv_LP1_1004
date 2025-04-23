#include <stdio.h>

main()
{
	int i=0, contador = 0;
	char gabarito[10][1], respostas[10][1];

	for(i = 0; i < 10; i++) {
		printf("Digite a resposta correta do gabarito. \n");
		scanf("%d", &gabarito[i]);
	}
	for(i = 0; i < 10; i++) {
		printf("Digite a resposta do candidato. \n");
		scanf("%d", &respostas[i][1]);
		
		if(respostas[i][1] == gabarito[i][1]) {
		    contador ++;
		}
	}
	
	printf("Quantidade de acertos: \n %d", contador);

}
