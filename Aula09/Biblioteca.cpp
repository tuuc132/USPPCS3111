#include "Biblioteca.h"
#include "SemCapacidade.h"
#include "SemMonitor.h"
#include <stdexcept>
using namespace std;
/*faça os includes necessários*/

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
    /*adicione a captura da exceção SemCapacidade*/
    if(quantidadeDeReservas < maximo){
        try {
            Reserva* r = new Reserva(quantidadeDeAlunos, horaDeInicio, sala);
            reservas[quantidadeDeReservas++] = r;
            return true;

        } catch (SemCapacidade *e){
            cout << e->what() << endl;
            delete e;
            return false;

        }
    }
    return false;
}

bool Biblioteca::adicionarReserva(SalaDeEstudo* sala, Aluno* aluno, int horaDeInicio){
    /*adicione as capturas das exceções SemCapacidade e SemMonitor*/
    Monitor* m = dynamic_cast<Monitor*>(aluno);
    if(m != NULL) {
        if(quantidadeDeReservas < maximo){
            try {
                ReservaMonitoria* r = new ReservaMonitoria(horaDeInicio, sala, m);
                reservas[quantidadeDeReservas++] = r;
                return true;
            } catch (SemCapacidade *e){
                if( sala->getCapacidade() == 1){
                    delete e;
                    throw new invalid_argument ("Monitorias nao podem ocorrer em salas individuais");
                }
                delete e;
                return false;
            } catch (SemMonitor *e){
                cout << e->what() << endl;
                delete e;
                return false;
            }
        }
        return false;
    } else return adicionarReserva(sala, 1, horaDeInicio);
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


