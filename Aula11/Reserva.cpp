#include "Reserva.h"
#include <iostream>
using namespace std;

Reserva::Reserva(int quantidadeDeAlunos, int inicio, int fim, SalaDeEstudo* sala){
    this->quantidadeDeAlunos = quantidadeDeAlunos;
    this->inicio = inicio;
    this->fim = fim;
    this->sala = sala;
}

Reserva::~Reserva(){

}

int Reserva::getQuantidadeDeAlunos(){
    return quantidadeDeAlunos;
}

int Reserva::getInicio(){
    return inicio;
}

int Reserva::getFim(){
    return fim;
}

SalaDeEstudo* Reserva::getSala(){
    return sala;
}

void Reserva::imprimir(){
    cout << "Reserva ("<< (this->getInicio()) << "h ate " << this->getFim() << "h):" << endl;
    cout << "- ";
    sala->imprimir();
}
