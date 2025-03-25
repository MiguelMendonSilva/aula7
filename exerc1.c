#include <stdio.h>

int main() {
    int num1;
    int soma = 0;
    printf("Digite um número: ");
    scanf("%d", &num1);

    for(int num = 1 ; num <= num1; num+=2){
        printf("%d\n", num);
        soma +=num;
    }
    printf("A soma dos numeros impares é: %d", soma);
  return 0;
}  
