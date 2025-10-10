#include "Aluno.h"
Aluno::Aluno(int nusp,string nome,bool neurodivergente){
    this->nusp = nusp;
    this->nome = nome;
    this->neurodivergente = neurodivergente;
}
Aluno::~Aluno(){

}
int Aluno::getNusp(){
    return nusp;
}
string Aluno::getNome(){
    return nome;
}

bool Aluno::getNeurodivergente(){
    return neurodivergente;
}
