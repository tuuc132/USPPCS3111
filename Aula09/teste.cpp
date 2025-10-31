#include "SalaDeEstudo.h"
#include "Monitor.h"
#include "ReservaMonitoria.h"
#include "SemMonitor.h"
#include "SemCapacidade.h"
#include "SalaIndividual.h"
#include "Biblioteca.h"
#include <iostream>
#include <stdexcept>
using namespace std;
/*faça os includes necessários*/

void teste1() {
    try {
        SalaDeEstudo *sala1 = new SalaDeEstudo(-1, 1);
    } catch (invalid_argument *e){
        cout << e->what() << endl;
        delete e;
    }

    try{
        SalaDeEstudo *sala2 = new SalaDeEstudo(2, 0);
    } catch (invalid_argument *e){
        cout << e->what() << endl;
        delete e;
    }

}

void teste2() {
    SalaDeEstudo *sala15 = new SalaDeEstudo (15, 3);
    SalaDeEstudo *sala6 = new SalaDeEstudo (6, 9);
    Monitor *Pitagoras = new Monitor (5555, "Pitagoras", "MAP1234", 2);

    try {
        ReservaMonitoria *reserva1 = new ReservaMonitoria (10, sala6, Pitagoras);
    } catch (SemMonitor *e) {
        cout << e->what() << endl;
        delete e;
    } catch (SemCapacidade *e) {
        cout << e->what() << endl;
        delete e;
    }

    try {
        ReservaMonitoria *reserva2 = new ReservaMonitoria (13, sala15, Pitagoras);
    } catch (SemMonitor *e) {
        cout << e->what() << endl;
        delete e;
    } catch (SemCapacidade *e) {
        cout << e->what() << endl;
        delete e;
    }

    delete Pitagoras;
    delete sala6;
    delete sala15;
}

void teste3() {
    SalaDeEstudo *sala15 = new SalaDeEstudo (15, 3);
    SalaDeEstudo *sala6 = new SalaDeEstudo (6, 9);
    Monitor *Pitagoras = new Monitor (5555, "Pitagoras", "MAP1234", 2);
    SalaIndividual *sala40 = new SalaIndividual (40, true);
    Monitor *Arquimedes = new Monitor (3333, "Arquimedes", "PME3332", 3);
    Biblioteca *biblioteca = new Biblioteca (3);

    try {
        biblioteca->adicionarReserva(sala40, Arquimedes, 13);
    } catch (invalid_argument *e){
        cout << e->what() << endl;
        delete e;
    }

    biblioteca->adicionarReserva(sala40, 1, 7);
    biblioteca->adicionarReserva(sala6, Pitagoras, 17);
    biblioteca->adicionarReserva(sala15, 5, 9);
    biblioteca->imprimir();

    delete biblioteca;
    delete Arquimedes;
    delete sala40;
    delete Pitagoras;
    delete sala6;
    delete sala15;
}