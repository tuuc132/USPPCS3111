#ifndef SALAINDIVIDUAL_H
#define SALAINDIVIDUAL_H
#include "SalaDeEstudo.h"

class SalaIndividual : public SalaDeEstudo {
private:
    bool temComputador;
public:
    SalaIndividual(int numero, bool temComputador);
    virtual ~SalaIndividual();
};

#endif