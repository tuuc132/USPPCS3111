#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include "SalaDeEstudo.h"
#include "Reserva.h"
#include "Monitor.h"
#include "ReservaMonitoria.h"
#include <iostream>
using namespace std;

class Biblioteca {
private:
    SalaDeEstudo** salas;
    Reserva** reservas;
    int quantidadeDeSalas, quantidadeDeReservas, maximo;

public:
    // Adicione o método adicionarReserva
    Biblioteca(int maximo);
    virtual ~Biblioteca();

    SalaDeEstudo** getSalaDeEstudos();
    Reserva** getReservas();

    bool adicionarReserva(SalaDeEstudo* sala, int quantidadeDeAlunos, int horaDeInicio);
    bool adicionarReserva(SalaDeEstudo* sala, Aluno* aluno, int horaDeInicio);
    bool adicionarSala(SalaDeEstudo* s);
    void imprimir();
};

#endif