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
    virtual ~Reserva();
    int getQuantidadeDeAlunos();
    int getHoraInicio();
    SalaDeEstudo* getSala();
    virtual int getDuracao();
    virtual void imprimir();
};

#endif