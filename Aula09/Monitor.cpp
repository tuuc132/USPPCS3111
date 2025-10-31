#include "Monitor.h"

Monitor::Monitor(int nusp, string nome, string disciplina, int duracaoAtendimento) : Aluno(nusp, nome) {
    this->disciplina = disciplina;
    this->duracaoAtendimento = duracaoAtendimento;
}

Monitor::~Monitor(){

}

string Monitor::getDisciplina() {
    return disciplina;
}

int Monitor::getDuracaoAtendimento() {
    return duracaoAtendimento;
}