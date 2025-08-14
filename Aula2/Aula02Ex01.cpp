#include <iostream>
using namespace std;

int* encontrarMelhorDisponivel(int capacidadeDasSalas[], int numeroDasSalas[], int quantidadeDeSalas, int quantidadeDeAlunos){
    int menorIndice = 0;
    int verificador = 0;
    int capacidadeMax = 0;

    for (int i = 0; i < quantidadeDeSalas; i++)
        if (capacidadeDasSalas[i] == quantidadeDeAlunos)
            return &numeroDasSalas[i];

    for (int i = 0; i < quantidadeDeSalas; i++)
        if(capacidadeDasSalas[i] > capacidadeMax)
            capacidadeMax = capacidadeDasSalas[i];

    for (int i = 0; i < quantidadeDeSalas; i++){
        if(capacidadeDasSalas[i] > quantidadeDeAlunos && capacidadeDasSalas[i] < capacidadeMax){
            menorIndice = i;
            verificador++;
        }
    }

    if(verificador == 0)
        return nullptr;
    
    return &numeroDasSalas[menorIndice];
}

/*Comente a main para enviar*/
int main(){
    int capacidadeDasSalas[] = {1, 1, 15, 10, 8};
    int numeroDasSalas[] = {293, 1, 420, 25, 69};
    int quantidadeDeSalas = 5;
    int quantidadeDeAlunos = 9;
    int* valor = encontrarMelhorDisponivel(capacidadeDasSalas, numeroDasSalas, quantidadeDeSalas, quantidadeDeAlunos);

    cout << "valor do codigo eh : " << *valor << endl;

    return 0;
}