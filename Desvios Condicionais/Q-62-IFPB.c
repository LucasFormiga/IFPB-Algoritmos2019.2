#include <stdio.h>
#include <stdbool.h>

main()
{
	int n, m;

	printf("Informe o numero que voce deseja verificar: ");
	scanf("%i", &n);

	printf("Informe o numero que sera o multiplo: ");
	scanf("%i", &m);

	bool multiplo = n % m == 0;

	if (multiplo)
	{
		printf("O numero %i eh multiplo de %i", n, m);
	}
	else
	{
		printf("O numero %i nao eh multiplo de %i", n, m);
	}
}