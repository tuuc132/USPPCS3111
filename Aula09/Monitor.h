#ifndef MONITOR_H
#define MONITOR_H
#include "Aluno.h"
#include <string>
#include <iostream>

using namespace std;

class Monitor: public Aluno {
private:
    string disciplina;
    int duracaoAtendimento;
public:
    Monitor(int nusp, string nome, string disciplina, int duracaoAtendimento);
    virtual ~Monitor();
    string getDisciplina();
    int getDuracaoAtendimento();
};

#endif