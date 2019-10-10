#include <stdio.h>

main() {
	int quantidadeQuestoes, questoesCorretas;

	printf("Insira o valor da quantidade de questoes da avaliacao: ");
	scanf("%d", &quantidadeQuestoes);

	printf("Insira o valor da quantidade de questoes que o candidato acertou: ");
	scanf("%d", &questoesCorretas);

	float percentualAcertos = ((float) questoesCorretas / (float) quantidadeQuestoes) * 100;
	printf("O percentual de acertos foi de %.2f por cento \n", percentualAcertos);

	float percentualErros = (((float)quantidadeQuestoes - (float)questoesCorretas) / (float) quantidadeQuestoes) * 100;
	printf("O percentual de erros foi de %.2f por cento", percentualErros);
}