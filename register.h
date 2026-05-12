//
// Created by eec34 on 5/11/26.
//

#ifndef REGISTER_H
#define REGISTER_H
#include <stdint.h>

typedef struct {
    char nome[3];
    uint8_t valor_atual;
} RegistradorEstrutura;

void inicializar(RegistradorEstrutura *registrador, char nome[3]);

void escrever(RegistradorEstrutura *registrador, uint8_t valor_atual);

uint8_t leitura(RegistradorEstrutura *registrador);

#endif //OPERATING_SYSTEMS_FROM_0_TO_1_REGISTER_H
