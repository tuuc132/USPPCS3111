#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include "SalaDeEstudo.h"
#include "Reserva.h"

class Biblioteca {
private:
    SalaDeEstudo** salas;
    Reserva** reservas;
    int quantidadeDeSalas, quantidadeDeReservas, maximo;

public:
    Biblioteca(int maximo);
    ~Biblioteca();

    SalaDeEstudo** getSalaDeEstudos();
    Reserva** getReservas();

    bool adicionarReserva(Reserva* r);
    bool adicionarSala(SalaDeEstudo* s);
    SalaDeEstudo* melhorSala(int quantidadeDeAlunos);

};

#endif