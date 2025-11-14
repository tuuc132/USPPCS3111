#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include "SalaDeEstudo.h"
#include "Reserva.h"
#include <vector>
#include <list>
using namespace std;

class Biblioteca {
private:
    vector<SalaDeEstudo*>* salas;
    list<Reserva*>* reservas;

public:
    Biblioteca();
    virtual ~Biblioteca();

    int getMaximo();

    vector<SalaDeEstudo *>* getSalasDeEstudo();
    void adicionar(SalaDeEstudo *s);
    
    list<Reserva *> *getReservas();
    void fazer(Reserva* r);
    void cancelar(Reserva* r);

    void imprimirSalas();
    void imprimirReservas();
};

#endif