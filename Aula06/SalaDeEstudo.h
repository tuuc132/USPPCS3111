#ifndef SALADEESTUDO_H
#define SALADEESTUDO_H

class SalaDeEstudo {

protected:
    int numero;
    int capacidade;

public:
    SalaDeEstudo(int numero, int capacidade);
    virtual ~SalaDeEstudo();
    int getCapacidade();
    int getNumero();
    void imprimir();
};

#endif