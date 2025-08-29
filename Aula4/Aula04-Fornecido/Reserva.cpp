/*
 * Coloque a implementação da classe aqui. Use as diretivas adequadas e
 * inclua os arquivos e/ou bibliotecas necessários para a classe.
 */
#include "Reserva.h"
#include <iostream>
#include <cmath>

using namespace std;

int Reserva::calcularDuracao(){
    int duracao = floor( log( 2*this->quantidadeDeAlunos + 1 ) );
    return duracao;
}

void Reserva::setNumeroDaSala(int numeroDaSala) {
    this->numeroDaSala = numeroDaSala;
}

void Reserva::setQuantidadeDeAlunos(int quantidadeDeAlunos) {
    this->quantidadeDeAlunos = quantidadeDeAlunos;
}

void Reserva::setHoraDeInicio(int horaDeInicio) {
    this->horaDeInicio = horaDeInicio;
}

int Reserva::getNumeroDaSala() {
    return numeroDaSala;
}

int Reserva::getQuantidadeDeAlunos() {
    return quantidadeDeAlunos;
}

int Reserva::getHoraDeInicio() {
    return horaDeInicio;
}

void Reserva::imprimir(){
    cout << "Sala: " << this->numeroDaSala << ", " 
              << this->quantidadeDeAlunos << " alunos, inicio as "  
              << this->horaDeInicio  << " horas e termina as " 
              << this->horaDeInicio + calcularDuracao() <<" horas." << endl;

}