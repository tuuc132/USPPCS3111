#include "SalaDeEstudo.h"
#include <iostream>
using namespace std;

int SalaDeEstudo::numeroDeSalas = 0;

SalaDeEstudo::SalaDeEstudo(int capacidade) : capacidade (capacidade){
    SalaDeEstudo::numeroDeSalas++;
    this->numero = SalaDeEstudo::numeroDeSalas;
}

SalaDeEstudo::~SalaDeEstudo(){

}

int SalaDeEstudo::getCapacidade(){
    return capacidade;
}

int SalaDeEstudo::getNumero(){
    return numero;
}

int SalaDeEstudo::getNumeroDeSalas(){
    return SalaDeEstudo::numeroDeSalas;
}

void SalaDeEstudo::imprimir(){
    cout << "Sala de Estudo | Numero: " << numero << " | Capacidade: " << capacidade << endl;
}


