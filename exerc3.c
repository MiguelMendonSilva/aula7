#include <stdio.h>

int main(void) {
  char opcao;

  printf("Digite a opção(S = Secar, \n E = Enxaguar e secar,\n L = Lavar, Enxaguar e Secar) \n F para encerrar: ");
  
 opcao= getchar();
 getchar();

  int quantidadeS = 0;
  int quantidadeE = 0;
  int quantidadeL = 0;

  while( opcao != 'F' ) {
    switch (opcao) {
      case 'S':
	    printf("Sua roupa foi secada ");
	    quantidadeS++;
	break;
      case 'E': 
	    printf("Sua roupa foi Exaguada e secada ");
	    quantidadeE++;
	break;
      case 'L':
    	printf("Sua roupa foi lavada, enxaguada e secada ");
    	quantidadeL++;
	break;
    }

    printf("\nOpção selecionada, F para encerrar: \n");
    opcao = getchar();
    getchar();
  }

  printf(" Roupas Secadas: %d \n Roupas Enxaguadas e Secadas: %d \n Roupas lavadas, enxaguadas e secadas: %d", quantidadeS, quantidadeE, quantidadeL);
  return 0;
}