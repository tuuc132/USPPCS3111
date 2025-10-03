#include "Reserva.h"
#include <iostream>
#include <cmath>
using namespace std;

Reserva::Reserva(int quantidadeDeAlunos, int horaInicio, SalaDeEstudo* sala){
    this->quantidadeDeAlunos = quantidadeDeAlunos;
    this->horaInicio = horaInicio;
    this->sala = sala;
}

Reserva::~Reserva(){

}

int Reserva::getQuantidadeDeAlunos(){
    return quantidadeDeAlunos;
}

int Reserva::getHoraInicio(){
    return horaInicio;
}

SalaDeEstudo* Reserva::getSala(){
    return sala;
}

int Reserva::getDuracao(){
    return ceil(2*sqrt(quantidadeDeAlunos)-1);
}

void Reserva::imprimir(){
    cout << "Reserva | "<< (this->getDuracao()) <<" hora(s):" << endl;
    sala->imprimir();
}
