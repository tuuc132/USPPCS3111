#include "ReservaMonitoria.h"
#include "SemMonitor.h"
/*faça os includes necessários*/

ReservaMonitoria::ReservaMonitoria(int horaInicio, SalaDeEstudo* sala, Monitor* monitor) : Reserva(4, horaInicio, sala) {
    /*adicione a geração da exceção SemMonitor*/
    if(horaInicio < 12 || (horaInicio + monitor->getDuracaoAtendimento()) > 18){
        throw new SemMonitor ("Monitor indisponivel nesse horario");
    }
    this->monitor = monitor;
}

ReservaMonitoria::~ReservaMonitoria() {

}

int ReservaMonitoria::getDuracao() {
    if (horaInicio >= 12 && horaInicio + monitor->getDuracaoAtendimento() <= 18)
        return monitor->getDuracaoAtendimento();
    return 0;
}

void ReservaMonitoria::imprimir() {
    Reserva::imprimir();
    cout << "Monitor " << monitor->getNome() << " da disciplina " << monitor->getDisciplina() << endl;
}