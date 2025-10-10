#include "Biblioteca.h"
#include <iostream>
using namespace std;

Biblioteca::Biblioteca(int maximo) : maximo (maximo){
    salas = new SalaDeEstudo*[maximo];
    reservas = new Reserva*[maximo];

    quantidadeDeSalas = 0;
    quantidadeDeReservas = 0;
}

Biblioteca::~Biblioteca(){
    for(int i = 0; i < quantidadeDeSalas; i++){
        delete salas[i];
    }

    for(int i = 0; i < quantidadeDeReservas; i++){
        delete reservas[i];
    }

    delete[] salas;
    delete[] reservas;
}

SalaDeEstudo** Biblioteca::getSalaDeEstudos(){
    return salas;
}

Reserva** Biblioteca::getReservas(){
    return reservas;
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


SalaDeEstudo* Biblioteca::melhorSala(int quantidadeDeAlunos){

    int indiceDeMenorExcesso = 0;
    int menorExcesso = 10000;

    for (int i =0;i< quantidadeDeSalas;i++){

        bool salaReservada = false;
        for (int j =0;j < quantidadeDeReservas;j++){

            if (salas[i] == reservas[j]->getSala()){
                salaReservada = true;
            }
        }
    if(salaReservada == false){

        int excesso = salas[i]->getCapacidade() - quantidadeDeAlunos;
        if (excesso >= 0 && excesso < menorExcesso){
            menorExcesso = excesso;
            indiceDeMenorExcesso = i;
        }
    }
    }
    return salas[indiceDeMenorExcesso];

}