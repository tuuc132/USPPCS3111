#include <iostream>
using namespace std;

double calcularEstatisticas(int capacidadeDasSalas[], int quantidade, int* minimo, int& maximo){
    double media = 0.0;
    *minimo = 0;
    int Maximo = 0;
    int valor = 0;
    for(int i = 0; i < quantidade; i++){
        media = media + capacidadeDasSalas[i];
        if(capacidadeDasSalas[i] > Maximo){
            valor = i;
            Maximo = capacidadeDasSalas[i];
        }        
    }
    *minimo = Maximo;
    for (int i =0; i < quantidade; i++){
        if (capacidadeDasSalas[i] < *minimo)
            *minimo = capacidadeDasSalas[i];
    }
    media = media/quantidade;
    maximo = capacidadeDasSalas[valor];
    return media;
}

/*Comente a main para enviar*/
int main(){
    int capacidade[] = {1,1,15,10,8};
    int minimo;
    int maximo;
    int quantidade = 5;
    double estatistica;

    estatistica = calcularEstatisticas(capacidade, quantidade, &minimo, maximo);

    cout << estatistica << " " << minimo << " " << maximo << endl;

    return 0;
}