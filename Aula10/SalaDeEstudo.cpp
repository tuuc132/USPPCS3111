#include "SalaDeEstudo.h"
#include <iostream>
using namespace std;

SalaDeEstudo::SalaDeEstudo(int numero, int capacidade) : numero (numero), capacidade (capacidade){

}

SalaDeEstudo::~SalaDeEstudo(){

}

int SalaDeEstudo::getCapacidade(){
    return capacidade;
}

int SalaDeEstudo::getNumero(){
    return numero;
}

void SalaDeEstudo::imprimir(){
    cout << "Sala de Estudo | Numero: " << numero << " | Capacidade: " << capacidade << endl;
}


