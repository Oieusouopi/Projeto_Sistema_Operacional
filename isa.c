//
// Created by rafael on 13/05/2026.
//
#include "isa.h"

void carregar(MemoriaEstrutura *memoria, RegistradorEstrutura *registrador, uint8_t endereco) {
     uint8_t valor_encontrado = buscar(memoria, endereco);
     escrever(registrador, valor_encontrado);
}

void somar(RegistradorEstrutura *r0, RegistradorEstrutura *r1) {
     r0->valor_atual = r0->valor_atual + r1->valor_atual;
}

void subtrair(RegistradorEstrutura *r0, RegistradorEstrutura *r1) {
     r0->valor_atual = r0->valor_atual - r1->valor_atual;
}

void finalizar(CPUEstrutura *cpu) {
     cpu->rodando = PARADO;
}

void decodificador(CPUEstrutura *cpu, uint8_t opcode) {
     switch (opcode) {
          case CARREGAR: {
               uint8_t indice_registrador = buscar(&cpu->memoria,cpu->pc.valor_atual + 1);
               uint8_t endereco = buscar(&cpu->memoria, cpu->pc.valor_atual + 2);
               carregar(&cpu->memoria, &cpu->registradores[indice_registrador], endereco);
               cpu->pc.valor_atual += 3;
               break;
          }
          case SOMAR: {
               uint8_t indice_primeiro_registrador = buscar(&cpu->memoria, cpu->pc.valor_atual + 1);
               uint8_t indice_segundo_registrador = buscar(&cpu->memoria, cpu->pc.valor_atual + 2);
               somar(&cpu->registradores[indice_primeiro_registrador], &cpu->registradores[indice_segundo_registrador]);
               cpu->pc.valor_atual += 3;
               break;
          }
          case SUBTRAIR: {
               uint8_t indice_primeiro_registrador = buscar(&cpu->memoria, cpu->pc.valor_atual + 1);
               uint8_t indice_segundo_registrador = buscar(&cpu->memoria, cpu->pc.valor_atual + 2);
               subtrair(&cpu->registradores[indice_primeiro_registrador], &cpu->registradores[indice_segundo_registrador]);
               cpu->pc.valor_atual += 3;
               break;
          }
          case FINALIZAR: {
               finalizar(cpu);
               break;
          }
     }
}