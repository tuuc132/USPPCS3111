/*
 * Use as diretivas adequadas e
 * inclua os arquivos e/ou bibliotecas necessarios para a classe.
 */
#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H
#include "Reserva.h"
#define MAXIMO_DE_RESERVAS 10

class Biblioteca {
    /*
     * Os atributos devem ser acessiveis somente internamente ao escopo
     * da classe
     */

    /*
     * Os metodos devem ser acessíveis de fora do escopo da classe
     */
    public:
    int quantidade = 0;
    Reserva *reservas[MAXIMO_DE_RESERVAS];


    bool fazer(Reserva* reserva);
    Reserva* reservaATerminar();
    Reserva* getReserva(int posicao);
    void imprimir();
};

#endif