#ifndef RESERVAGRUPO_H
#define RESERVAGRUPO_H

#include "SalaDeEstudo.h"
#include "Aluno.h"
#include "Reserva.h"

class ReservaGrupo: public Reserva {
    protected:
    Aluno** alunos;

    public:
    ReservaGrupo(Aluno** alunos,int quantidadeDeAlunos, int horaInicio, SalaDeEstudo* sala);
    ~ReservaGrupo();
    int calcularDuracao();
};

#endif