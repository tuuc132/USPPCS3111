#ifndef ALUNO_H
#define ALUNO_H
#include <string>

using namespace std;

class Aluno {
protected:
    int nusp;
    string nome;
public:
    Aluno (int nusp, string nome);
    int getNusp();
    string getNome();
    virtual ~Aluno ();
};

#endif