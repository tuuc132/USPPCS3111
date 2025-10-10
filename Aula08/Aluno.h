#ifndef ALUNO_H
#define ALUNO_H

#include <iostream>
using namespace std;

class Aluno{
public:
    Aluno(int nusp,string nome, bool neurodivergente);
    ~Aluno();
    int getNusp();
    string getNome();
    bool getNeurodivergente();
protected:
    int nusp;
    string nome;
    bool neurodivergente;
};

#endif