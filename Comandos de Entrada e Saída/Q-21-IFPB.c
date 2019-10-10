#include <stdio.h>

main() {
	float valorProducao, margemLucro;

	printf("Informe o valor de producao do produto: ");
	scanf("%f", &valorProducao);

	printf("Informe a margem de lucro: ");
	scanf("%f", &margemLucro);

	float valorVenda = ((margemLucro * valorProducao) / 100) + valorProducao;
	printf("O valor de venda eh de R$%2.f caso o valor de producao seja R$%.2f e a margem de lucro de %.2f por cento", valorVenda, valorProducao, margemLucro);
}