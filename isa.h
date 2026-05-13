//
// Created by rafael on 13/05/2026.
//


#ifndef ISA_H
#define ISA_H

#include <stdint.h>
#include "memory.h"
#include "register.h"
#include "cpu.h"

#define CARREGAR 0x01
#define SOMAR 0x02
#define SUBTRAIR 0x03
#define FINALIZAR 0x04

void decodificador(CPUEstrutura *cpu, uint8_t opcode);

void carregar(MemoriaEstrutura *memoria, RegistradorEstrutura *registrador, uint8_t endereco);
void somar(RegistradorEstrutura *r0, RegistradorEstrutura *r1);
void subtrair(RegistradorEstrutura *r0, RegistradorEstrutura *r1);
void finalizar(CPUEstrutura *cpu);

#endif //ISA_H
