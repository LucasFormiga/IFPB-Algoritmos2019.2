#include <stdio.h>

main() {
	int numero;

	printf("Insira o numero desejado: ");
	scanf("%d", &numero);

	int antecessor = numero - 1;
	int sucessor = numero + 1;

	printf("O antecessor de %d eh %d e o sucessor eh %d", numero, antecessor, sucessor);
}