#include <iostream>
#include <vector>

using namespace std;

class Fila {
private:
    vector<int> elementos;

public:
    void enfileirar(int valor) {
        elementos.push_back(valor);
    }

    void desenfileirar() {
        if (!elementos.empty()) {
            cout<<"Elemento desenfileirado: "<<elementos.front()<<endl;
            elementos.erase(elementos.begin());
        } else {
            cout<<"A fila esta vazia."<<endl;
        }
    }

    void apresentarFrente() {
        if (!elementos.empty()) {
            cout<<"Frente da fila: "<<elementos.front()<<endl;
        } else {
            cout<<"A fila esta vazia."<<endl;
        }
    }

    void desenfileirarTodos() {
        while (!elementos.empty()) {
            desenfileirar();
        }
    }

    void enfileirarTodos() {
        int quantidade;
        cout<<"Digite a quantidade de elementos a serem enfileirados: ";
        cin>>quantidade;

        for (int i = 0; i < quantidade; i++) {
            int valor;
            cout<<"Digite o elemento "<< i + 1<<": ";
            cin>>valor;
            enfileirar(valor);
        }
    }
};

int main() {
    Fila fila;
    int opcao;

    do {
        cout<<"\nMenu:" << endl;
        cout<<"1. Enfileirar" << endl;
        cout<<"2. Desenfileirar" << endl;
        cout<<"3. Apresentar a frente da fila" << endl;
        cout<<"4. Desenfileirar todos" << endl;
        cout<<"5. Enfileirar todos" << endl;
        cout<<"6. Sair" << endl;
        cout<<"Escolha uma opcao: ";
        cin>>opcao;

        switch (opcao) {
            case 1: {
                int quantidade;
                cout<<"Digite a quantidade de valores a serem enfileirados: ";
                cin>>quantidade;

                for (int i = 0; i < quantidade; i++) {
                    int valor;
                    cout<<"Digite o valor "<< i + 1<<": ";
                    cin>>valor;
                    fila.enfileirar(valor);
                }
                break;
            }
            case 2:
                fila.desenfileirar();
                break;
            case 3:
                fila.apresentarFrente();
                break;
            case 4:
                fila.desenfileirarTodos();
                break;
            case 5:
                fila.enfileirarTodos();
                break;
            case 6:
                cout<<"Saindo do programa."<<endl;
                break;
            default:
                cout<<"Opcao invalida."<<endl;
        }
    } while (opcao != 6);

    return 0;
}

