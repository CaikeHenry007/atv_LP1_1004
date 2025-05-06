#include <stdio.h>

main()
{
	int vetorA[5], vetorB[5], vetorC[5], i=0;

	for(i = 0; i < 5; i++) {
		printf("Digite um valor para colocar no vetor A. \n");
		scanf("%d", &vetorA[i]);
	}
	for(i = 0; i < 5; i++) {
		printf("Digite um valor para colocar no vetor B. \n");
		scanf("%d", &vetorB[i]);
	}

	vetorC[0] = vetorA[0] - vetorB[4];
	vetorC[1] = vetorA[1] - vetorB[3];
	vetorC[2] = vetorA[2] - vetorB[2];
	vetorC[3] = vetorA[3] - vetorB[1];
	vetorC[4] = vetorA[4] - vetorB[0];

    printf("O vetor ficou assim: \n");

	for(i = 0; i < 5; i++) {
		printf("%d \n", vetorC[i]);
	}
}
