#include "Monitor.h"

Monitor::Monitor(int nusp, string nome, string disciplina, int horaAtendimento) : Aluno(nusp, nome) {
    this->disciplina = disciplina;
    this->horaAtendimento = horaAtendimento;
}

Monitor::~Monitor(){

}

string Monitor::getDisciplina() {
    return disciplina;
}

int Monitor::getHoraAtendimento() {
    return horaAtendimento;
}