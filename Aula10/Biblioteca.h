#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include "SalaDeEstudo.h"

class Biblioteca {
private:
    SalaDeEstudo** salas;
    int quantidadeDeSalas, maximo;

public:
    Biblioteca(int maximo);
    ~Biblioteca();

    SalaDeEstudo** getSalasDeEstudo();
    int getQuantidadeDeSalas();
    int getMaximo();
    bool adicionarSala(SalaDeEstudo* s);
    void imprimir();
};

#endif