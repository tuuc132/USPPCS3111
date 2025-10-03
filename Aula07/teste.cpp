#include "Biblioteca.h"
#include "Aluno.h"
#include "Monitor.h"
#include "Reserva.h"
#include "ReservaMonitoria.h"
#include "SalaDeEstudo.h"
#include <iostream>

using namespace std;
/*faça os includes necessarios*/

void teste1() {
    SalaDeEstudo *sala30 = new SalaDeEstudo(30,6);
    SalaDeEstudo *sala14 = new SalaDeEstudo(14,4);

    string Tome = "Tome";
    string PCS3335 = "PCS3335"; /*testei criar 2 variaveis strings e depois testei colocando diretamente o texto*/
    Monitor *tome = new Monitor(1111, Tome, PCS3335, 2);
    Monitor *victor = new Monitor(1551, "Victor", "MAC2166", 3);

    ReservaMonitoria *reservatome = new ReservaMonitoria(15, sala30, tome);
    ReservaMonitoria *reservavictor = new ReservaMonitoria(17, sala14, victor);

    reservatome->imprimir();
    reservavictor->imprimir();

}

void teste2() {
    Biblioteca *biblioteca = new Biblioteca(5);

    SalaDeEstudo *sala34 = new SalaDeEstudo(34, 4);
    biblioteca->adicionarSala(sala34);

    Monitor *Fabio = new Monitor(1234, "Fabio", "PCS3111", 4);
    biblioteca->adicionarReserva(sala34, Fabio, 12);

    Aluno *Maria = new Aluno(5678, "Maria");
    biblioteca->adicionarReserva(sala34, Maria, 8);

    biblioteca->adicionarReserva(sala34, 2, 10);

    biblioteca->imprimir();
}