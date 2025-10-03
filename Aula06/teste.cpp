#include "Biblioteca.h"
#include "SalaDeEstudo.h"
#include "SalaIndividual.h"
#include "Reserva.h"

void teste1(){
    SalaIndividual *s1 = new SalaIndividual(10, true);
    Reserva *r1 = new Reserva(1, 14, s1);
    r1->imprimir();
    delete s1;
    delete r1;
}
void teste2(){
    Biblioteca *b = new Biblioteca(10);
    SalaIndividual *si1 = new SalaIndividual(10, true);
    SalaDeEstudo *se1 = new SalaDeEstudo(12, 3);
    SalaDeEstudo *se2 = new SalaDeEstudo(22, 4);
    Reserva *r1 = new Reserva(2, 14, se1);

    b->adicionarSala(si1);
    b->adicionarSala(se1);
    b->adicionarSala(se2);
    b->adicionarReserva(r1);

    b->melhorSala(2)->imprimir();

    delete b;
}