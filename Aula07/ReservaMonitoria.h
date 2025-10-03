#ifndef RESERVA_MONITORIA
#define RESERVA_MONITORIA
#include "Reserva.h"
#include "Monitor.h"
#include "SalaDeEstudo.h"
#include <iostream>

using namespace std;

// Corrija para que a classe seja filha de reserva OK
class ReservaMonitoria: public Reserva {
private:
    // Defina atributos conforme necessario
    Monitor *monitor;
public:
    // Redefina o método getDuracao
    int getDuracao();
    ReservaMonitoria(int horaInicio, SalaDeEstudo* sala, Monitor* monitor);
    virtual ~ReservaMonitoria();
    Monitor* getMonitor();
    void imprimir();
};

#endif