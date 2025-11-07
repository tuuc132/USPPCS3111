#include "PersistenciaDeBiblioteca.h"
#include "Biblioteca.h"
#include "SalaDeEstudo.h"
#include <fstream>
#include <iostream>
#include <stdexcept>
using namespace std;

// Faça os Includes necessários

PersistenciaDeBiblioteca::PersistenciaDeBiblioteca(){

}

PersistenciaDeBiblioteca::~PersistenciaDeBiblioteca(){

}

void PersistenciaDeBiblioteca::salvar(string arquivo, Biblioteca* b){
    // implemente
    ofstream output;
    output.open(arquivo);

    int quantidade = b->getQuantidadeDeSalas();
    SalaDeEstudo **salas = b->getSalasDeEstudo();

    for (int i = 0; i < quantidade; i++){
        output << salas[i]->getNumero() << endl << salas[i]->getCapacidade() << endl;
    }

    output.close();
}

Biblioteca* PersistenciaDeBiblioteca::carregar(string arquivo){
    ifstream entrada;
    entrada.open(arquivo);

    if(entrada.fail()){
        throw new invalid_argument("Erro de leitura");
        entrada.close();
    }

    Biblioteca *b = new Biblioteca(10);
    int quantidade = 0;
    int numero = 0;
    int capacidade = 0;

    entrada >> numero >> capacidade;
    while (entrada){
        SalaDeEstudo *s = new SalaDeEstudo (numero, capacidade);
        b->adicionarSala(s);
        quantidade++;
        entrada >> numero >> capacidade;
    }

    if(entrada.eof() && quantidade == 0){  
        return nullptr;
    }

    if(!entrada.eof()){
        entrada.close();
        throw new logic_error("Arquivo com formatacao inesperada");
    }
    return b;
}   