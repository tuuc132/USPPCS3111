#ifndef PERSISTENCIADEBIBLIOTECA_H
#define PERSISTENCIADEBIBLIOTECA_H

#include "Biblioteca.h"
#include <string>
using namespace std;

class PersistenciaDeBiblioteca {
public:
    PersistenciaDeBiblioteca();
    ~PersistenciaDeBiblioteca();
    void salvar(string arquivo, Biblioteca* b);
    Biblioteca* carregar(string arquivo);
};

#endif