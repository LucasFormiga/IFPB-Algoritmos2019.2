#include <stdio.h>
#include <string.h>

main() {
	char letter[1];

	printf("Informe a letra à ser transformada: ");
	printf("%s", strupr(gets(letter)));
}