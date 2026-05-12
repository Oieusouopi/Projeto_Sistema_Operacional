#include "register.h"
#include "string.h"

void inicializar(RegistradorEstrutura *registrador, char nome[3]) {
    strcpy(registrador->nome, nome);
}

void escrever(RegistradorEstrutura *registrador, uint8_t valor_atual) {
    registrador->valor_atual = valor_atual;
}

uint8_t leitura(RegistradorEstrutura *registrador) {
    return registrador->valor_atual;
}