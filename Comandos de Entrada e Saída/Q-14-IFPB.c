#include <stdio.h>
#include <string.h>

main()
{
	char palavra[1];

	printf("Insira a palavra que deseja calcular o comprimento: ");
	gets(palavra);

	printf("O comprimento da palavra %c eh %d", palavra, strlen(palavra));
}