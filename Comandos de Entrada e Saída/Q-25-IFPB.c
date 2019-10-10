#include <stdio.h>

main() {
	int numero;

	printf("Insira o numero no qual voce deseja calcular a tabuada: ");
	scanf("%d", &numero);

	printf("Tabuada do %d \n", numero);
	printf("1 X %d \n", (numero * 1));
	printf("2 X %d \n", (numero * 2));
	printf("3 X %d \n", (numero * 3));
	printf("4 X %d \n", (numero * 4));
	printf("5 X %d \n", (numero * 5));
	printf("6 X %d \n", (numero * 6));
	printf("7 X %d \n", (numero * 7));
	printf("8 X %d \n", (numero * 8));
	printf("9 X %d \n", (numero * 9));
	printf("10 X %d \n", (numero * 10));
}