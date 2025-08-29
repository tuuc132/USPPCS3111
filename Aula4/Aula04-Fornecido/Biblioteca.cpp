/*
 * Coloque a implementação da classe aqui. Use as diretivas adequadas e
 * inclua os arquivos e/ou bibliotecas necessários para a classe.
 */
#include "Reserva.h"
#include "Biblioteca.h"
#include <iostream>

using namespace std;

bool Biblioteca::fazer(Reserva* reserva){
    /*implemente segundo o enunciado*/
    if (this->quantidade == MAXIMO_DE_RESERVAS)  //vetor lotado
        return false;
    for (int i = 0; i < MAXIMO_DE_RESERVAS; i++){    //repetiu a reserva
        if (this->reservas[i] == reserva)
            return false;
    }
    reservas[this->quantidade] = reserva;   //adiciona a reserva no vetor na ultima posicao
    quantidade += 1;
    return true;
}

Reserva* Biblioteca::reservaATerminar(){
    /*implemente segundo o enunciado*/
    Reserva *menor = this->reservas[0];    //reserva inicial eh colocada no menor
    if (this->quantidade == 0)
        return nullptr;
    for ( int i = 0; i < this->quantidade; i++){
        if (( this->reservas[i]->getHoraDeInicio() + this->reservas[i]->calcularDuracao()) < (menor->getHoraDeInicio() + menor->calcularDuracao()))
            menor = reservas[i];
    }
    return menor;
}

void Biblioteca::imprimir(){
    /*Não modifique este método*/
    // o vetor precisa chamar reservas e a quantidade de elementos deve-se chamar quantidade
    cout << "Biblioteca com " << quantidade << " reservas " << endl;
    for (int i = 0; i < quantidade; i++)
        reservas[i]->imprimir();
    if (quantidade > 0)
        cout << "Sala da reserva a terminar: " << this->reservaATerminar()->getNumeroDaSala() << endl;

}

Reserva* Biblioteca::getReserva(int posicao) {
    /*Não modifique este método*/
    // o vetor precisa chamar reservas
    return reservas[posicao];
}