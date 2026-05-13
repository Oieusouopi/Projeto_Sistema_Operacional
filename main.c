#include <stdio.h>

#include "cpu.h"

int main() {
	CPUEstrutura cpu = inicializacao();
	printf("Valor da memoria antes %u\n", cpu.memoria.memorias[0]);
	printf("Valor do registrador antes %u\n", cpu.registradores[0].valor_atual);
	armazenar(&cpu.memoria, 0, 100);
	executar_ciclo(&cpu, 0);
	printf("Valor da memoria depois %u\n", cpu.memoria.memorias[0]);
	printf("Valor do registrador depois %u\n", cpu.registradores[0].valor_atual);
	return 0;
};
