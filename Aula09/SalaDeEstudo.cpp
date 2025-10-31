#include "SalaDeEstudo.h"
#include <iostream>
#include <stdexcept>
using namespace std;

// Faça include do que for necessário

SalaDeEstudo::SalaDeEstudo(int numero, int capacidade) : numero (numero), capacidade (capacidade){
    /*adicione a geração das exceções invalid_argument*/
    if(numero <= 0){
        throw new invalid_argument ("Numero da sala invalido");
    }
    if(capacidade <= 0){
        throw new invalid_argument ("Capacidade invalida");
    }
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


