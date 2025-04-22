#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

main()
{
  setlocale(LC_ALL, "");	
  char cores[5][20]={"AMARELO-CANARIO","AMARELO-OURO","VERDE-LIMAO","ROSA-CLARO","AZUL-COBALTO"};
  
  system("color B"); 
  for(int i=0; i<5; i++){
	printf("\n%s\n", cores[i]);
	if (strcmp(cores[i], "AZUL-COBALTO") == 0)
	{ printf("\nCor encontrada!\n"); } 	
	else { printf("\nCor nao encontrada!\n"); }
  }
}
