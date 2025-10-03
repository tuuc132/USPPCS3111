#include "ReservaMonitoria.h"

ReservaMonitoria::ReservaMonitoria(int horaInicio, SalaDeEstudo* sala, Monitor* monitor) : Reserva(0, horaInicio, sala) {
    /*implemente*/
    this->monitor = monitor;
}

ReservaMonitoria::~ReservaMonitoria() {

}

Monitor* ReservaMonitoria::getMonitor() {
    /* implemente OK*/ 
    return this->monitor;
}

void ReservaMonitoria::imprimir() {
    /*implemente*/
    Reserva::imprimir();
    cout << "Monitor " << this->monitor->getNome() << " da disciplina " << this->monitor->getDisciplina() << endl;
}

int ReservaMonitoria::getDuracao(){
    if(this->horaInicio < 8 || this->horaInicio >= 18)
        return 0;
    if(this->monitor->getHoraAtendimento() == 0)
        return 0;
    if(this->monitor->getHoraAtendimento() + this->horaInicio >= 18)
        return 18 - this->horaInicio;
    return this->monitor->getHoraAtendimento();
}