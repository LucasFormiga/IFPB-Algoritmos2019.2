#include <stdio.h>

main()
{
	int n;

	printf("Informe o numero que voce deseja ler por extenso: ");
	scanf("%d", &n);

	switch (n)
	{
	case (1):
		printf("Um");
		break;

	case (2):
		printf("Dois");
		break;

	case (3):
		printf("Tres");
		break;

	case (4):
		printf("Quatro");
		break;

	case (5):
		printf("Cinco");
		break;

	case (6):
		printf("Seis");
		break;

	case (7):
		printf("Sete");
		break;

	case (8):
		printf("Oito");
		break;

	case (9):
		printf("Nove");
		break;

	case (10):
		printf("Dez");
		break;
	}
}