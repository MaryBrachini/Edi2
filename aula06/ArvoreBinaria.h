#ifndef ARVOREBINARIA_H
#define ARVOREBINARIA_H

class ArvoreBinaria {
public:
    ArvoreBinaria();
    ArvoreBinaria(const ArvoreBinaria& orig);
    virtual ~ArvoreBinaria();
    No *raiz;
    bool vazio();
    void insere(int valor, No *inicio);
    void listar(No* no);

    /*struct noInicio{
    int dado;
    noInicio *esquerda;
    noInicio *direita;
    };*/
    
private:

};

#endif

