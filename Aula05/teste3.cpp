#include "Biblioteca.h"

// faça os includes necessários

void teste3(){
    // implemente
    Biblioteca *biblioteca = new Biblioteca(5);

    SalaDeEstudo *sala0 = new SalaDeEstudo(0,50);
    SalaDeEstudo *sala1 = new SalaDeEstudo(1,50);
    SalaDeEstudo *sala2 = new SalaDeEstudo(2,50);
    SalaDeEstudo *sala3 = new SalaDeEstudo(3,50);
    SalaDeEstudo *sala4 = new SalaDeEstudo(4,50);

    biblioteca->adicionarSala(sala0);
    biblioteca->adicionarSala(sala1);
    biblioteca->adicionarSala(sala2);
    biblioteca->adicionarSala(sala3);
    biblioteca->adicionarSala(sala4);

    Reserva *reserva0 = new Reserva(5,1,sala0);
    Reserva *reserva1 = new Reserva(10,1,sala1);
    Reserva *reserva2 = new Reserva(49,1,sala2);
    Reserva *reserva3 = new Reserva(2,1,sala3);
    Reserva *reserva4 = new Reserva(7,1,sala4);

    biblioteca->adicionarReserva(reserva0);
    biblioteca->adicionarReserva(reserva1);
    biblioteca->adicionarReserva(reserva2);
    biblioteca->adicionarReserva(reserva3);
    biblioteca->adicionarReserva(reserva4);

    biblioteca->terminarReservas(5);

    biblioteca->imprimirReservas();

    delete biblioteca;
}