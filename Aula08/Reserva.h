#ifndef RESERVA_H
#define RESERVA_H

#include "SalaDeEstudo.h"

class Reserva {
protected:
    int quantidadeDeAlunos;
    int horaInicio;
    SalaDeEstudo* sala;
public:
    Reserva(int quantidadeDeAlunos, int horaInicio, SalaDeEstudo* sala);
    ~Reserva();
    int getQuantidadeDeAlunos();
    int getHoraInicio();
    SalaDeEstudo* getSala();
    virtual int calcularDuracao() = 0;
    void imprimir();
};

#endif