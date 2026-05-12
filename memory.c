#include "memory.h"


void armazenar(MemoriaEstrutura *memoria, uint8_t endereco, uint8_t valor) {
    memoria->memorias[endereco] = valor;
}

uint8_t buscar(MemoriaEstrutura *memoria, uint8_t endereco) {
    return memoria->memorias[endereco];
}