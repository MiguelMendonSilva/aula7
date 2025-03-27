// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int batata = 0;
    int hamburguer  = 0; 
    int suco  = 0;
    int combo  = 0;
    int totalItens = 0;
    int total = 0;
    char opcao;
    
    printf("Digite a opção(B = Batata, H = Hamburguer, S = Suco, C = Combo) F para encerrar: ");
    opcao = getchar();
    getchar();
    
    while(opcao != 'F'){
        switch(opcao){
            case 'B':
                    printf("Batata Adicionada ");
                    batata++;
                    total+= 10;
                    totalItens++;
                break;
            case 'H':
                    printf("Hamburguer adiconado ");
                    hamburguer++;
                    total+= 15;
                    totalItens++;
                break;
            case 'S':
                    printf("Suco adicionado");
                    suco++;
                    total+= 9;
                    totalItens++;
                break;
            case 'C':
                    printf("Combo adicionado");
                    combo++;
                    total+= 30;
                    totalItens++;
                break;
             default:
                	printf("Opção não existe!");
                	break;   
        }
        
         printf("\nF para encerrar: \n");
         opcao = getchar();
         getchar();
    }
    
    printf("Batata: %d \nHamburguer: %d \nSuco: %d \nCombo: %d \n", batata, hamburguer, suco, combo);
    printf("Total de itens: %d", totalItens);
    printf("\n==============================");
    printf("\nValor total: %d", total);

    return 0;
}