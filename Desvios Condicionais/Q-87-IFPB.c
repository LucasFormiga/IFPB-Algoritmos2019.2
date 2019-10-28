#include <stdio.h>
#include <string.h>

main()
{
	char c[1];

	printf("Informe o estado civil (s = solteiro, c = casado, d = divorciado, v = viuvo): ");
	gets(c);

	if (strcmp(c, "s") == 0) {
		printf("Estado Civil: Solteiro");
	}
	else if (strcmp(c, "c") == 0)
	{
		printf("Estado Civil: Casado");
	}
	else if (strcmp(c, "d") == 0)
	{
		printf("Estado Civil: Divorciado");
	}
	else if (strcmp(c, "v") == 0)
	{
		printf("Estado Civil: Viuvo");
	}
}