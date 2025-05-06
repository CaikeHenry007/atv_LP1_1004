#include <stdio.h>

main()
{
	int i=0, inferior = 0, superior = 0, contmeio =0;
	float preco[5], codigo[5], codigoentre50e100[5], media = 0;

	for(i = 0; i < 5; i++) {
	    printf("Digite o codigo do produto. \n");
		scanf("%f", &codigo[i]);
	    
	    printf("Digite o preco do produto. \n");
		scanf("%f", &preco[i]);
		
		if(preco[i] < 50) {
		    inferior ++;
		} else if (preco[i] >= 50 && preco[i] <= 100) {
		    codigoentre50e100[contmeio] = codigo[i];
		    contmeio ++;
		} else if (preco[i] > 100) {
		    superior ++;
		    media += preco[i];
		}

	}
	
	media = media / superior;

	printf("Quantidade de produtos com preco inferior a 50.00: %d \n", inferior);
	
	printf("Codigo dos produtos com preco entre 50.00 e 100.00:\n");
    for(i = 0; i < contmeio; i++) {
        printf("Codigo: %.0f\n", codigoentre50e100[i]);
    }
	
	if (superior > 0) {
        printf("Media dos precos dos produtos com preco maior que 100.00: %.2f\n", media);
    } else {
        printf("Nao ha produtos com preco maior que 100.00.\n");
    }
}
