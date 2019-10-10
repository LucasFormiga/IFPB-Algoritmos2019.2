#include <stdio.h>

main() {
	float cotacao, real;

	printf("Insira a cotacao atual do dolar: ");
	scanf("%f", &cotacao);

	printf("Insira o valor em real que passara para dolar: ");
	scanf("%f", &real);

	float valorConvertido = real * cotacao;
	printf("A cotacao eh $%.2f, o valor em real a ser convertido eh R$%.2f e o valor convertido eh $%.2f", cotacao, real, valorConvertido);
}