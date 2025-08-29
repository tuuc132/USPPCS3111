#include <iostream>
#include "Reserva.h"
#include "Biblioteca.h"

using namespace std;

void teste1 () {
    /*implemente segundo o enunciado*/
    Reserva *sala25 = new Reserva;
    sala25->setNumeroDaSala(25);
    sala25->setHoraDeInicio(18);
    sala25->setQuantidadeDeAlunos(2);

    Reserva *sala64 = new Reserva;
    sala64->setNumeroDaSala(64);
    sala64->setHoraDeInicio(7);
    sala64->setQuantidadeDeAlunos(5);

    sala25->imprimir();

    sala64->imprimir();

}

void teste2 () {
    /*implemente segundo o enunciado*/
    Reserva *sala25 = new Reserva;
    sala25->setNumeroDaSala(25);
    sala25->setHoraDeInicio(18);
    sala25->setQuantidadeDeAlunos(2);

    Reserva *sala64 = new Reserva;
    sala64->setNumeroDaSala(64);
    sala64->setHoraDeInicio(7);
    sala64->setQuantidadeDeAlunos(5);

    Biblioteca *biblioteca = new Biblioteca;

    biblioteca->fazer(sala25);
    biblioteca->fazer(sala64);

    biblioteca->imprimir();
}

/************************************ Classe Reserva ********************************************/
