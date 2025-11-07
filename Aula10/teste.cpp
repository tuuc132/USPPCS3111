#include "Biblioteca.h"
#include "SalaDeEstudo.h"
#include "PersistenciaDeBiblioteca.h"
#include <stdexcept>
#include <iostream>
using namespace std;
// Faça os includes necessários

void teste1(){
    // implemente
    Biblioteca *b = new Biblioteca(5);
    SalaDeEstudo *sala0 = new SalaDeEstudo(0, 5);
    SalaDeEstudo *sala1 = new SalaDeEstudo(1, 10);
    SalaDeEstudo *sala2 = new SalaDeEstudo(2, 15);

    b->adicionarSala(sala0);
    b->adicionarSala(sala1);
    b->adicionarSala(sala2);

    PersistenciaDeBiblioteca *p = new PersistenciaDeBiblioteca();
    p->salvar("teste1.txt", b);

    SalaDeEstudo *sala3 = new SalaDeEstudo(3, 20);

    b->adicionarSala(sala3);
    p->salvar("teste1.txt", b);

    delete b;
}

void teste2(){
    // implemente
    PersistenciaDeBiblioteca *p = new PersistenciaDeBiblioteca();
    try {
        Biblioteca *b = p->carregar("teste2.txt");
        b->imprimir();
        delete b;
    } catch (invalid_argument *e){
        cout << e->what() << endl;
        delete e;
    } catch (logic_error *e){
        cout << e->what() << endl;
        delete e;
    }
    delete p;
}
