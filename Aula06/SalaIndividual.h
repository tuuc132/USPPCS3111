#include "SalaDeEstudo.h"
#ifndef SALAINDIVIDUAL_H
#define SALAINDIVIDUAL_H

class SalaIndividual : public SalaDeEstudo {
    public:
        SalaIndividual(int numero, bool temComputador);
        ~SalaIndividual();
        int temComputador;
        bool getTemComputador(int temComputador);
};

#endif