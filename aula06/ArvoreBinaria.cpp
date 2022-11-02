#include "ArvoreBinaria.h"
#include <stddef.h>
#include <iostream>

//#include "No.h"

using namespace std;

ArvoreBinaria::ArvoreBinaria() {
    this->raiz = NULL;
}

ArvoreBinaria::ArvoreBinaria(const ArvoreBinaria& orig) {
}

ArvoreBinaria::~ArvoreBinaria() {
}

bool ArvoreBinaria::vazio() {
    return this->raiz == NULL;
}

void ArvoreBinaria::insere(int valor) {
    No *tmp = this->raiz;
    No *ant = NULL;

    while (tmp != NULL) {
        ant = tmp;
        if (tmp->valor < valor)
            tmp = tmp->direito;
        else
            tmp = tmp->esquerdo;
    }
    if (this->vazio())
        this->raiz = new No(valor);
    else if (ant->valor < valor)
        ant->direito = new No(valor);
    else
        ant->esquerdo = new No(valor);
}


void ArvoreBinaria::listar(No *inicio) {

    if (inicio != NULL) {

        this->listar(inicio->esquerdo);

        cout << inicio->valor << " ";

        this->listar(inicio->direito);

    }

}

