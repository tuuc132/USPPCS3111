#ifndef RESERVA_MONITORIA
#define RESERVA_MONITORIA
#include "Reserva.h"
#include "Monitor.h"
#include "SalaDeEstudo.h"
#include <iostream>

using namespace std;

class ReservaMonitoria : public Reserva {
private:
    Monitor* monitor;
public:
    ReservaMonitoria(int horaInicio, SalaDeEstudo* sala, Monitor* monitor);
    virtual ~ReservaMonitoria();
    int getDuracao();
    void imprimir();
};

#endif