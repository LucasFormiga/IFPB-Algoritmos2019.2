#include <stdio.h>

main() {
	float total;

	printf("Insira o valor total do consumo: ");
	scanf("%f", &total);

	float totalComServico = (total * 0.10) + total;
	float totalComCouvert = totalComServico + 10;

	printf("O valor total do consumo eh R$ %2.f \n", total);
	printf("A taxa de servico eh de 10 por cento \n");
	printf("O valor do couvert eh R$ 10 \n");
	printf("O valor total da conta eh de R$ %2.f \n", totalComCouvert);
}