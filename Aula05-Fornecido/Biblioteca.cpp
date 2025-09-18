#include "Biblioteca.h"
#include <iostream>
using namespace std;

Biblioteca::Biblioteca(int maximo){
    // implemente
    this->maximo = maximo;
    this->quantidadeDeReservas = 0;
    this->quantidadeDeSalas = 0;

    reservas = new Reserva*[maximo];
    salas = new SalaDeEstudo*[maximo];

}

Biblioteca::~Biblioteca(){
    // implemente
    for(int i = 0; i < quantidadeDeReservas; i++){
        delete reservas[i];
    }

    for(int i = 0; i < this->quantidadeDeSalas; i++){
        delete salas[i];
    }

    delete[] reservas;
    delete[] salas;
}

SalaDeEstudo** Biblioteca::getSalasDeEstudo(){
    return salas;
}

Reserva** Biblioteca::getReservas(){
    return reservas;
}

int Biblioteca::getQuantidadeDeSalas(){
    return quantidadeDeSalas;
}

int Biblioteca::getMaximo(){
    return maximo;
}

int Biblioteca::getQuantidadeDeReservas(){
    return quantidadeDeReservas;
}

bool Biblioteca::adicionarReserva(Reserva* r){
    if(quantidadeDeReservas < maximo){
        reservas[quantidadeDeReservas++] = r;
        return true;
    }

    return false;
}

bool Biblioteca::adicionarSala(SalaDeEstudo* s){
    if(quantidadeDeSalas < maximo){
        salas[quantidadeDeSalas++] = s;
        return true;
    }

    return false;
}

void Biblioteca::imprimirReservas(){
    for(int i = 0; i < quantidadeDeReservas; i++){
        reservas[i]->imprimir();
    }
}

int Biblioteca::terminarReservas(int horaAtual){
    // implemente
    int soma = 0;
    int i = 0;
    while (i < quantidadeDeReservas){
        if ( (reservas[i]->getHoraInicio() + reservas[i]->calculaDuracao()) <= horaAtual){
            delete reservas[i];
            for (int j = i; j < quantidadeDeReservas - 1; j++){
                reservas[j] = reservas[j+1];
             }
            soma = soma + 1;
            quantidadeDeReservas = quantidadeDeReservas - 1;
        }
        else
            i = i + 1;
    }
    return soma;
}
