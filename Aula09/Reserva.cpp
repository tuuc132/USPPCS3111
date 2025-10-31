#include "Reserva.h"
#include "SemCapacidade.h"
#include <iostream>
#include <cmath>
using namespace std;

/*faça os includes necessários*/

Reserva::Reserva(int quantidadeDeAlunos, int horaInicio, SalaDeEstudo* sala){
    /*adicione a geração da exceção SemCapacidade*/
    if(quantidadeDeAlunos > sala->getCapacidade()){
        throw new SemCapacidade("Mais alunos para reserva do que a sala suporta");
    }

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
    cout << "Reserva | "<< (this->getDuracao()) <<" hora(s)" << endl;
    sala->imprimir();
}
