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

SalaDeEstudo* Biblioteca::melhorSala(int quantidadeDeAlunos) {
    // implemente
    int menor = 0;

    if(quantidadeDeSalas == 0)
        return nullptr;
    for(int i = 0; i < quantidadeDeSalas; i++)
        if(salas[i]->getCapacidade() > salas[menor]->getCapacidade())
            menor = i;
    
    for(int i = 0; i < quantidadeDeSalas; i++){
        for(int j = 0; j < quantidadeDeReservas; j++){
            if(salas[i] != reservas[j]->getSala()){
                if(salas[i]->getCapacidade() == quantidadeDeAlunos)
                    return salas[i];
                if(salas[i]->getCapacidade() < salas[menor]->getCapacidade() && salas[i]->getCapacidade() > quantidadeDeAlunos){
                    menor = i;
                }
                
            }
        }
    }
    return salas[menor];
}


