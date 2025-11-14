#include "Biblioteca.h"
#include <iostream>
#include <stdexcept>
using namespace std;


Biblioteca::Biblioteca(){
    salas = new vector<SalaDeEstudo*>();
    reservas = new list<Reserva*>();
}

Biblioteca::~Biblioteca(){
    while(!salas->empty()){
        salas->pop_back();
    }

    delete salas;
    delete reservas;
}

vector<SalaDeEstudo*>* Biblioteca::getSalasDeEstudo(){
    return salas;
}

list<Reserva*>* Biblioteca::getReservas(){
    return reservas;
}


void Biblioteca::imprimirSalas(){
    for(unsigned int i = 0; i < salas->size(); i++){
        salas->at(i)->imprimir();
    }
}

void Biblioteca::imprimirReservas(){
    list<Reserva*>::iterator i = reservas->begin();

    while(i != reservas->end()){
        (*i)->imprimir();
        i++;
    }
}

void Biblioteca::adicionar(SalaDeEstudo* s){
    for(unsigned  i = 0; i < salas->size(); i++){
        if(salas->at(i) == s)
            throw new invalid_argument("Elemento repetido");
    }
    salas->push_back(s);
}

void Biblioteca::fazer(Reserva* r){

    if(r->getQuantidadeDeAlunos() > r->getSala()->getCapacidade()){
        throw new invalid_argument("Sala sem capacidade");
    }

    list<Reserva*>::iterator i = reservas->begin();

    while (i != reservas->end()) {
        if((*i)->getSala() == r->getSala()) {
            if ((*i)->getFim() > r->getInicio() && (*i)->getInicio() < r->getFim()) {
                throw new invalid_argument("Periodo indisponivel");
            }
        }
        i++;
    }
    reservas->push_back(r);
}

void Biblioteca::cancelar(Reserva* r){
    reservas->remove(r);
}
