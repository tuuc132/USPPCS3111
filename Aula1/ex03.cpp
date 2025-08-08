#include <iostream>
using namespace std;

int capacidadeDisponivel(int salas[], int capacidades[], int quantidadeDeSalas, int salasOcupadas[], int quantidadeDeSalasOcupadas);
int capacidadeDisponivel(int salas[], int capacidades[], int quantidadeDeSalas, int salasOcupadas[], int quantidadeDeSalasOcupadas){
    int soma = 0;
    int achou = 0;
    for(int i = 0; i<quantidadeDeSalas; i++){
        for(int j = 0; j<quantidadeDeSalasOcupadas && achou==0; j++){
            if(salas[i] == salasOcupadas[j]){
                achou = 1;
            }
        }
        if(achou == 0){
            soma = soma + capacidades[i];
        }
         achou = 0;
    }
    return soma;
}

/*
int main(){
    int salas[] = {1,3,8,13,55,64};
    int capacidades[] = {3,7,8,3,2,1};
    int salasOcupadas[] = {13,64};
    int quantidadeDeSalas = 6;
    int quantidadeDeSalasOcupadas = 2;

    cout << "Capacidade disponivel: " << capacidadeDisponivel(salas, capacidades, quantidadeDeSalas, salasOcupadas, quantidadeDeSalasOcupadas) << endl;
   
    return 0;
}
*/