#include <iostream>
#include <cmath>
// Faca os includes necessarios

using namespace std;

class Reserva{
public:
    int numeroDaSala = 0;
    int quantidadeDeAlunos = 0;
    int horaDeInicio = 0;

    int calcularDuracao();
    void imprimir();
};

// Implementar os metodos da classe Reserva

int Reserva::calcularDuracao (){
    int duracao = ceil(((2*sqrt(quantidadeDeAlunos)) - 1));
    return duracao;
}

void Reserva::imprimir(){
    cout << "Reserva: Sala: " << numeroDaSala <<  ", " << quantidadeDeAlunos << " alunos, inicio as " << horaDeInicio << " horas e termina as " << (calcularDuracao() + horaDeInicio) << " horas." << endl;

}

class Biblioteca{
public:
    Reserva *reserva1 = nullptr;
    Reserva *reserva2 = nullptr;

    bool adicionarReserva(Reserva *r);
    Reserva* reservaATerminar();
    void imprimir();
};

// Implementar os metodos da classe Biblioteca

bool Biblioteca::adicionarReserva(Reserva *r){
    if(reserva1 == r)
        return false;
    else if(reserva1 == nullptr && reserva2 == nullptr){
        reserva1 = r;
        return true;
    }
    else if(reserva2 == nullptr){
        reserva2 = r;
        return true;
    }
    else 
        return false;
}

Reserva* Biblioteca::reservaATerminar(){
    if(reserva1 == nullptr && reserva2 == nullptr)
        return nullptr;
    else if((reserva1->calcularDuracao() + reserva1->horaDeInicio) <= (reserva2->calcularDuracao() + reserva2->horaDeInicio))
        return reserva1;
    else 
        return reserva2;
}

void Biblioteca::imprimir(){
    Reserva *r = new Reserva;
    cout << "Biblioteca:" << endl;
    if(reserva1 != nullptr)
        reserva1->imprimir();
    if(reserva2 != nullptr)
        reserva2->imprimir();
    if(reserva1 != nullptr && reserva2 != nullptr)
    r = reservaATerminar();
    cout << "Sala da reserva a terminar: " << r->numeroDaSala << endl;
}


void teste1(){
    // Implemente a funcao teste do exercicio 01 segundo o enunciado
    Reserva *sala2 = new Reserva;
    sala2->numeroDaSala = 2;
    sala2->quantidadeDeAlunos = 3;
    sala2->horaDeInicio = 14;
    sala2->imprimir();

    Reserva *sala4 = new Reserva;
    sala4->numeroDaSala = 4;
    sala4->quantidadeDeAlunos = 7;
    sala4->horaDeInicio = 2;
    sala4->imprimir();

}


void teste2(){
    // Implemente a funcao teste do exercicio 02 segundo o enunciado    
    Reserva *sala2 = new Reserva;
    sala2->numeroDaSala = 2;
    sala2->quantidadeDeAlunos = 3;
    sala2->horaDeInicio = 14;
    sala2->imprimir();

    Reserva *sala4 = new Reserva;
    sala4->numeroDaSala = 4;
    sala4->quantidadeDeAlunos = 7;
    sala4->horaDeInicio = 2;
    sala4->imprimir();

    Biblioteca *biblioteca = new Biblioteca;
    biblioteca->adicionarReserva(sala2);
    biblioteca->adicionarReserva(sala4);
    biblioteca->imprimir();
}


int main(){
    teste1(); 
    teste2();
    return 0;
}