#include "SalaIndividual.h"

SalaIndividual :: SalaIndividual( int numero, bool temComputador) : SalaDeEstudo(numero,1){
    this->temComputador = temComputador;
}

SalaIndividual :: ~SalaIndividual(){
}

bool SalaIndividual :: getTemComputador(int temComputador){
    if(this->temComputador == true )
        return true;
    else 
        return false;
}