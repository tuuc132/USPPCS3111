#include <iostream>
using namespace std;

int quantidadeDeSalasComACapacidade(int capacidades[], int quantidade, int capacidade);
int quantidadeDeSalasComACapacidade(int capacidades[], int quantidade, int capacidade) {
    int soma = 0;

    for (int i = 0; i < quantidade; i++){
        if(capacidades[i] == capacidade){
            soma++;
        }
    }
    return soma;
}

/*
int main(){
    int capacidades[] = {3,7,8,3,2,1};
    int quantidade = 6;
    int capacidade;

    cout << "Digite a capacidade: ";
    cin >> capacidade;

    cout << quantidadeDeSalasComACapacidade(capacidades, quantidade, capacidade) << endl;
    return 0;
}
*/