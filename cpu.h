#ifndef  CPU_H
#define CPU_H
#include "memory.h"
#include "register.h"
#include "config.h"

typedef enum {
    PARADO,
    RODANDO
} StatusCPU;

typedef struct {
    RegistradorEstrutura registradores[QUANTIDADE_DE_REGISTRADORES];
    MemoriaEstrutura memoria;
    RegistradorEstrutura pc;
    StatusCPU rodando;
} CPUEstrutura;

CPUEstrutura inicializacao();

void executar_ciclo(CPUEstrutura *cpu);


#endif
