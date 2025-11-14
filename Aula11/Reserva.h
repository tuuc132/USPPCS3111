#ifndef RESERVA_H
#define RESERVA_H

#include "SalaDeEstudo.h"

class Reserva {
private:
    int quantidadeDeAlunos;
    int inicio;
    int fim;
    SalaDeEstudo* sala;
public:
    Reserva(int quantidadeDeAlunos, int inicio, int fim, SalaDeEstudo* sala);
    ~Reserva();
    int getQuantidadeDeAlunos();
    int getInicio();
    int getFim();
    SalaDeEstudo* getSala();
    void imprimir();
};

#endif