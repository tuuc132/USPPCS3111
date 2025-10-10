#include "Biblioteca.h"
#include "Aluno.h"
#include "SalaDeEstudo.h"
#include "SalaIndividual.h"
#include "Reserva.h"
#include "ReservaGrupo.h"
#include <iostream>
using namespace std;

void teste1(){
    Aluno *Newton = new Aluno(123, "Newton", false);
    Aluno *Galileu = new Aluno(234, "Galileu", true);

    Aluno **alunos = new Aluno*[2];
    alunos[0] = Newton;
    alunos[1] = Galileu;

    SalaDeEstudo *sala1 = new SalaDeEstudo(2);

    ReservaGrupo *reservagrupo1 = new ReservaGrupo(alunos, 2, 14, sala1);

    reservagrupo1->imprimir();

    delete reservagrupo1;
    delete sala1;
    delete[] alunos;
    delete Galileu;
    delete Newton;
}

void teste2(){
    SalaDeEstudo *salaest1 = new SalaDeEstudo(4);
    SalaIndividual *salaind1 = new SalaIndividual(true);

    cout << SalaDeEstudo::getNumeroDeSalas() << endl;

    SalaDeEstudo *salaest2 = new SalaDeEstudo(3);

    cout << SalaDeEstudo::getNumeroDeSalas() << endl;

    salaest1->imprimir();
    salaind1->imprimir();
    salaest2->imprimir();

    delete salaest2;
    delete salaind1;
    delete salaest1;
}