#include "Reserva.h"

void teste2(){
    // implemente
    SalaDeEstudo *sala = new SalaDeEstudo(1,30);

    Reserva *reserva = new Reserva(24, 0, sala);
    reserva->imprimir();
    delete reserva;
    delete sala;

}