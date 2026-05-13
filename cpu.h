#ifndef  CPU_H
#define CPU_H
#include "memory.h"
#include "register.h"
#include "config.h"

typedef struct {
    RegistradorEstrutura registradores[QUANTIDADE_DE_REGISTRADORES];
    MemoriaEstrutura memoria;
} CPUEstrutura;

CPUEstrutura inicializacao();

void executar_ciclo(CPUEstrutura *cpu, uint8_t endereco_de_memoria);


#endif
