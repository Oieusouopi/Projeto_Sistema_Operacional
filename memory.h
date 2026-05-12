//
// Created by eec34 on 5/11/26.
//

#ifndef MEMORY_H
#define MEMORY_H
#include <stdint.h>

#include "config.h"

typedef struct {
    uint8_t memorias[TAMANHO_MEMORIA];
} MemoriaEstrutura;

void armazenar(MemoriaEstrutura *memoria, uint8_t valor, uint8_t endereco);

uint8_t buscar(MemoriaEstrutura *memoria, uint8_t endereco);

#endif
