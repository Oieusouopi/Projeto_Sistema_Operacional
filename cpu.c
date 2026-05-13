#include "cpu.h"

#include <stdio.h>
#include <string.h>

CPUEstrutura inicializacao() {
    CPUEstrutura cpu;
    MemoriaEstrutura memoria_estrutura;

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

void executar_ciclo(CPUEstrutura *cpu, uint8_t endereco_de_memoria) {
    uint8_t valor = buscar(&cpu->memoria, endereco_de_memoria);
    escrever(&cpu->registradores[0], valor);
    armazenar(&cpu->memoria, endereco_de_memoria, valor);
}