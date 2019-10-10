#include <stdio.h>
#include <math.h>

main() {
	float catetoOposto, catetoAdjacente;

	printf("Informe o valor do cateto oposto:");
	scanf("%f", &catetoOposto);

	printf("Informe o valor do cateto adjacente:");
	scanf("%f", &catetoAdjacente);

	float hipotenusa = pow(catetoOposto, 2) + pow(catetoAdjacente, 2);
	printf("O valor da hipotenusa eh: %.2f", hipotenusa);
}