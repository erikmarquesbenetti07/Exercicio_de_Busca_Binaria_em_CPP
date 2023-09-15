//1 -Faça um programa em c++ que realize uma busca binaria, 
//e a cada divisão realizada apresente na tela quantos elementos 
//foram eliminados do vetor.

#include <iostream>
#include <vector>

using namespace std;

// Busca binária
int buscaBinaria(vector<int>& vetor, int chave) {
    int esquerda = 0;
    int direita = vetor.size() - 1;
    int eliminados = 0;

    while (esquerda <= direita) {
        int meio = esquerda + (direita - esquerda) / 2;

        if (vetor[meio] == chave) {
            cout<<"Elemento encontrado! Foram eliminados "<<eliminados<<" elementos."<<endl;
            return meio;
        }
        else if (vetor[meio] < chave) {
            esquerda = meio + 1;
        }
        else {
            direita = meio - 1;
        }

        eliminados = vetor.size() - (direita + 1) - esquerda;
        cout<<"Eliminados: "<<eliminados<<endl;
    }

    cout<<"Elemento nao encontrado! Foram eliminados "<<eliminados<<" elementos."<<endl;
    return -1;
}

int main() {
    int tamanho;
    cout<<"Digite o tamanho do vetor: ";
    cin>>tamanho;

    vector<int> vetor(tamanho);

    cout << "Digite os elementos do vetor em ordem crescente:" << endl;
    for (int i = 0; i < tamanho; i++) {
        cin >> vetor[i];
    }

    int chave;

    cout<<"Digite o elemento que deseja buscar: ";
    cin>>chave;

    int indice = buscaBinaria(vetor, chave);

    if (indice != -1) {
        cout<<"O elemento "<<chave<<"esta na posicao "<<indice<<" do vetor."<<endl;
    }
    else {
        cout<<"O elemento "<<chave<<" nao esta no vetor."<<endl;
    }

    return 0;
}

