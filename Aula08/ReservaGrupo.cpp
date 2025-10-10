#include "ReservaGrupo.h"
#include "Aluno.h"
#include <math.h>

ReservaGrupo::ReservaGrupo(Aluno** alunos,int quantidadeDeAlunos, int horaInicio, SalaDeEstudo* sala) : Reserva(quantidadeDeAlunos, horaInicio, sala)  {
    this->alunos = alunos;
}

ReservaGrupo::~ReservaGrupo(){

}

int ReservaGrupo::calcularDuracao(){
    int neurodivergentes = 0;
    int alunosnaodivergentes = 0;

    for(int i = 0; i < this->quantidadeDeAlunos; i++){
        if(alunos[i]->getNeurodivergente() == true)
            neurodivergentes++;
        else{
            alunosnaodivergentes++;
        }
    }

    return ceil((2*sqrt((2*neurodivergentes) + alunosnaodivergentes)) - 1);
}