#ifndef SALAINDIVIDUAL_H
#define SALAINDIVIDUAL_H

#include "SalaDeEstudo.h"

class SalaIndividual: public SalaDeEstudo{

public:
    SalaIndividual(bool temComputador);
    ~SalaIndividual();


protected:
    bool temComputador;

};

#endif