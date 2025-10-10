#ifndef SALADEESTUDO_H
#define SALADEESTUDO_H

class SalaDeEstudo {
protected:
    int numero;
    int capacidade;
    static int numeroDeSalas;
public:
    SalaDeEstudo(int capacidade);
    ~SalaDeEstudo();
    int getCapacidade();
    int getNumero();
    static int getNumeroDeSalas();
    void imprimir();
};

#endif