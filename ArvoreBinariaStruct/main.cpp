#include <cstdlib>
#include "ArvoreBinaria.h"
#include "iostream"

using namespace std;

int main(int argc, char** argv) {

    ArvoreBinaria *obj1 = new ArvoreBinaria;

    int valor, quanty = 0;
    ArvoreBinaria *arvore = new ArvoreBinaria();

    obj1->raiz = obj1->noMaior(obj1->raiz, 10);
    obj1->noMaior(obj1->raiz, 5);
    obj1->noMaior(obj1->raiz, 15);


    /* cout << "Digite a qtde de valores a serem adicionados na arvore" << endl;
     cin>>quanty;
     cout << "Digite os valores" << endl;
     for (int i = 0; i < quanty; i++) {
         cin>>valor;
         arvore->insere(valor);
     }*/
    obj1->listar(obj1->raiz);

    return 0;
}

