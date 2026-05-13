#include "cpu.h"

#include <stdio.h>
#include <string.h>

CPUEstrutura inicializacao() {
    CPUEstrutura cpu;
    MemoriaEstrutura memoria_estrutura;
    RegistradorEstrutura pc;
    sprintf(pc.nome, "%s", "PC");
    pc.valor_atual = 0;
    cpu.pc = pc;

    for (int i = 0; i < TAMANHO_MEMORIA; i++) {
        memoria_estrutura.memorias[i] = 0;
    }

    for (int i = 0; i < QUANTIDADE_DE_REGISTRADORES; i++) {
        RegistradorEstrutura registrador;
        char nome[3];
        sprintf(nome, "R%d", i);
        strcpy(registrador.nome, nome);
        escrever(&registrador, 0);

        cpu.registradores[i] = registrador;
    }

    cpu.memoria = memoria_estrutura;

    return cpu;
}

void executar_ciclo(CPUEstrutura *cpu) {
}