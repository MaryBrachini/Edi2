#ifndef ARVOREBINARIA_H
#define ARVOREBINARIA_H

#include "No.h"

class ArvoreBinaria {
public:
    ArvoreBinaria();
    ArvoreBinaria(const ArvoreBinaria& orig);
    virtual ~ArvoreBinaria();

    No *raiz;
    
    bool vazio();
    void insere(int valor);
    void listar(No *no);
    int noMaior(No *inicio);
    int noMenor(No *inicio);
   int Busca(No *inicio, int valor);
    int soma(No *inicio);
   // No* insereRec(No *raiz, int valor);
   // void PreOrdem(No *inicio);
   // void emOrdem (No *inicio);
    //void PosOrdem (No *inicio);
private:

};

#endif /* ARVOREBINARIA_H */

