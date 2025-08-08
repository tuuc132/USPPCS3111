#include <iostream>
using namespace std;

int quantidadeDeSalasDisponiveis(int quantidadeDeAlunos, bool ehMonitoria);
int quantidadeDeSalasDisponiveis(int quantidadeDeAlunos, bool ehMonitoria){
    int valor = 0;
    if(quantidadeDeAlunos>0 && quantidadeDeAlunos<=3){
        valor = 14;
    } else if(quantidadeDeAlunos>=4 && quantidadeDeAlunos<=7){
        valor = 5;
    }else if(quantidadeDeAlunos==8 || quantidadeDeAlunos==9){
        valor = 3;
    } else if(quantidadeDeAlunos>9){
        valor = 0;
    }
    if(ehMonitoria==true){
        valor = valor/2;
    }
    return valor;
}

/*
int main() {
    int quantidadeDeAlunos;
    bool ehMonitoria;

    cout << "Digite a quantidade de alunos: ";
    cin >> quantidadeDeAlunos;

    cout << "Digite 1 para sim, 0 para nao, para se eh monitoria ou nao: ";
    cin >> ehMonitoria;

    cout << quantidadeDeSalasDisponiveis(quantidadeDeAlunos, ehMonitoria) << endl;

    return 0;
}
*/