#include "Biblioteca.h"

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


bool Biblioteca::adicionarReserva(SalaDeEstudo* sala, int quantidadeDeAlunos, int horaDeInicio){
    if(quantidadeDeReservas < maximo){
        Reserva* r = new Reserva(quantidadeDeAlunos, horaDeInicio, sala);
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

void Biblioteca::imprimir() {
    cout << "Biblioteca com " << quantidadeDeSalas << " salas e " << quantidadeDeReservas << " reservas" << endl
         << "Salas: " << endl;
    for (int i = 0; i < quantidadeDeSalas; i++){
        salas[i]->imprimir();
    }
    cout << "Reservas: " << endl;
    for (int i = 0; i < quantidadeDeReservas; i++){
        reservas[i]->imprimir();
    }
}

bool Biblioteca::adicionarReserva(SalaDeEstudo* sala, Aluno* aluno, int horaDeInicio){
    Monitor *monitor = dynamic_cast<Monitor*>(aluno);
    if(monitor == NULL) {        /*eh aluno*/
        Reserva *reserva = new Reserva(1,horaDeInicio, sala);
        if(this->quantidadeDeReservas < this->maximo){
            reservas[quantidadeDeReservas++] = reserva;
            return true;
        }
        return false;
    }

    else{                        /*eh monitor*/
        ReservaMonitoria *reservamonitoria = new ReservaMonitoria(horaDeInicio, sala, monitor);
        if(this->quantidadeDeReservas < this->maximo){
            reservas[quantidadeDeReservas++] = reservamonitoria;
            return true;
        }
        return false;
        }
}
