#include <stdio.h>

main() {
	float celsius;

	printf("Insira a temperatura em celsius que deseja transformar: ");
	scanf("%f", &celsius);

	float fahrenheit = (celsius * (9/5)) + 32;
	float kelvin = celsius + 273.15;

	printf("A temperatura informada em celsius tem o valor de %.2f em fahrenheit \n", fahrenheit);
	printf("A temperatura informada em celsius tem o valor de %.2f em kelvin \n", kelvin);
}