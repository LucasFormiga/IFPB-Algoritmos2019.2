#include <stdio.h>

main() {
	float distancia, tempo;

	printf("Insira a distancia percorrida em quilometros: ");
	scanf("%f", &distancia);

	printf("Insira o tempo gasto: ");
	scanf("%f", &tempo);

	float quilometrosPorHora = distancia / tempo;
	float metrosPorSegundo = quilometrosPorHora / 3.6;
	printf("A velocidade media em m/s eh de: %.2f", metrosPorSegundo);
}