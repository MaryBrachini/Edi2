#ifndef NO_H
#define NO_H

class No {
public:
    No();
    No(int valor);
    virtual ~No();
    int valor;
    No *direito, *esquerdo;
};



#endif /* NO_H */

