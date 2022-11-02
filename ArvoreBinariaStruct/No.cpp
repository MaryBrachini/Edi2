#include "No.h"
#include <cstdlib>
#include "iostream"
#include <stddef.h>

No::No() {
    this->direito = this->esquerdo = NULL;
}

No::No(int valor) {
    this->valor = valor;
    this->direito = this->esquerdo = NULL;
}

No::~No() {
}

