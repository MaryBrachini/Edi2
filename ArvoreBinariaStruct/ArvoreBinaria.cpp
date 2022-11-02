#include "ArvoreBinaria.h"
#include <cstdlib>
#include "iostream"
#include <stddef.h>
#include "No.h"


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
    if (this->vazio()) {
        this->raiz = new No(valor);
    } else if (ant->valor < valor) {
        ant->direito = new No(valor);
    } else {
        ant->esquerdo = new No(valor);
    }
}

/*void ArvoreBinaria::emOrdem(No *inicio) {
    if (inicio != NULL) {
        this->emOrdem(inicio->esquerdo);
        cout << inicio->valor << " ";
        this->emOrdem(inicio->direito);
    }
}*/

/*void ArvoreBinaria::PosOrdem(No* inicio) {
    if (inicio != NULL) {
        this->PosOrdem(inicio->esquerdo);
        this->PosOrdem(inicio->direito);
        cout << inicio->valor << " ";
    }
}*/

/*void ArvoreBinaria::PreOrdem(No* inicio) {
    if (inicio != NULL) {
        cout << inicio->valor << " ";
        this->PreOrdem(inicio->esquerdo);
        this->PreOrdem(inicio->direito);

    }
}*/

/*No* ArvoreBinaria::insereRec(No *inicio, int valor) {

    if (inicio == NULL) {
        inicio = new No(valor);

    } else {
        if (valor < inicio->valor)
            inicio->esquerdo = insereRec(inicio->esquerdo, valor);
        else
            inicio->direito = insereRec(inicio->direito, valor);
    }
    return (inicio);

}*/

int ArvoreBinaria::noMaior(No *inicio) {
    if (inicio->direito == NULL)
        return (inicio->valor);
    else
        return (this->noMaior(inicio->direito));
}

int ArvoreBinaria::Busca(No *inicio, int valor) {
    while (inicio != NULL) {
        if (valor == inicio->valor)
            return inicio->valor;
        else if (valor < inicio->valor)
            inicio = inicio->esquerdo;
        else
            inicio = inicio->direito;
    }
    return 0;
}

int ArvoreBinaria::soma(No *inicio, int valor) {
    int sm=0;
    
        if (inicio != NULL)
            sm = inicio->valor+soma(inicio->esquerdo)+soma(inicio->direito);
    
    return sm;
                 
}

void ArvoreBinaria::listar(No *inicio) {
    if (inicio != NULL) {
        this->listar(inicio->esquerdo);
        cout << inicio->valor << " ";
        this->listar(inicio->direito);
    }
}




