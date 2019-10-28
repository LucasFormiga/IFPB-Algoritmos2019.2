#include <stdio.h>

main()
{
	float n1, n2, n3;

	printf("Informe os tres numeros que voce deseja verificar: ");
	scanf("%f%f%f", &n1, &n2, &n3);

	if (n1 > n2 && n1 > n3)
	{
		printf("O numero %.2f eh o maior de todos", n1);
	}
	else if (n2 > n1 && n2 > n3)
	{
		printf("O numero %.2f eh o maior de todos", n2);
	}
	else
	{
		printf("O numero %.2f eh o maior de todos", n3);
	}
}