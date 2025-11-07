#include "Biblioteca.h"
#include <iostream>
using namespace std;

Biblioteca::Biblioteca(int maximo) : maximo (maximo){
    salas = new SalaDeEstudo*[maximo];

    quantidadeDeSalas = 0;
}

Biblioteca::~Biblioteca(){
    for(int i = 0; i < quantidadeDeSalas; i++){
        delete salas[i];
    }

    delete[] salas;
}

SalaDeEstudo** Biblioteca::getSalasDeEstudo(){
    return salas;
}


int Biblioteca::getQuantidadeDeSalas(){
    return quantidadeDeSalas;
}

int Biblioteca::getMaximo(){
    return maximo;
}

bool Biblioteca::adicionarSala(SalaDeEstudo* s){
    if(quantidadeDeSalas < maximo){
        salas[quantidadeDeSalas++] = s;
        return true;
    }

    return false;
}

void Biblioteca::imprimir(){
    if(!quantidadeDeSalas){
        return;
    }

    for(int i = 0; i < quantidadeDeSalas; i++){
        salas[i]->imprimir();
    }
}
