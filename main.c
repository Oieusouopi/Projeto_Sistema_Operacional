#include <stdio.h>

#include "cpu.h"

int main() {
	CPUEstrutura cpu = inicializacao();
	cpu.memoria.memorias[0] = 0x01;
	cpu.memoria.memorias[1] = 0x00;
	cpu.memoria.memorias[2] = 20;

	cpu.memoria.memorias[3] = 0x01;
	cpu.memoria.memorias[4] = 0x01;
	cpu.memoria.memorias[5] = 21;

	cpu.memoria.memorias[6] = 0x02;
	cpu.memoria.memorias[7] = 0x00;
	cpu.memoria.memorias[8] = 0x01;

	cpu.memoria.memorias[9] = 0x04;

	cpu.memoria.memorias[20] = 20;
	cpu.memoria.memorias[21] = 10;

	executar_ciclo(&cpu);
	printf("Resultado R0: %u\n", cpu.registradores[0].valor_atual);
	return 0;
};
