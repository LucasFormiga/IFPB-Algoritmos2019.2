#include <stdio.h>

const float CENTIMETROS_CONVERSAO = 2.54;

main() {
	float polegadas;

	printf("Insira o valor das polegadas que voce deseja converter: ");
	scanf("%f", &polegadas);

	float centimetros = polegadas * CENTIMETROS_CONVERSAO;
	printf("O valor de %.2f polegadas equivale a %.2f centimetros", polegadas, centimetros);
}