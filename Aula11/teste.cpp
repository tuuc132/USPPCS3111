#include "Biblioteca.h"
#include <stdexcept>
#include <iostream>
using namespace std;

// faça os includes necessários

void teste1(){
    // implemente
    Biblioteca *b = new Biblioteca();
    SalaDeEstudo *s0 = new SalaDeEstudo(0, 10);
    b->adicionar(s0);

    SalaDeEstudo *s1 = new SalaDeEstudo(1, 10);
    b->adicionar(s1);

    b->imprimirSalas();
    delete b;
}

void teste2(){
    // implemente
    Biblioteca *b = new Biblioteca();
    SalaDeEstudo *s0 = new SalaDeEstudo(0, 10);
    b->adicionar(s0);

    SalaDeEstudo *s1 = new SalaDeEstudo(1, 10);
    b->adicionar(s1);

    Reserva *r1 = new Reserva(5, 10, 14, s0);
    Reserva *r2 = new Reserva(5, 11, 15, s1);
    Reserva *r3 = new Reserva(5, 10, 14, s0);

    try{
        b->fazer(r1);
        b->fazer(r2);
        b->fazer(r3);
    } catch (invalid_argument *e){
        cout << e->what() << endl;
        delete e;
    }
    
    b->imprimirReservas();

    b->cancelar(r2);

    b->imprimirReservas();

    delete r1;
    delete r2;
    delete r3;
    delete b;
}
