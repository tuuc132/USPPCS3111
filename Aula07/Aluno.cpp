#include "Aluno.h"

Aluno::Aluno(int nusp, string nome) {
    this->nusp = nusp;
    this->nome = nome;
}

Aluno::~Aluno(){

}

int Aluno::getNusp() {
    return nusp;
}

string Aluno::getNome() {
    return nome;
}

    