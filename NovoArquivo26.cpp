#include <iostream>
using namespace std;

const float LIMITE_SAQUE = 1000.0f; // Limite de saque
const float LIMITE_DEPOSITO = 5000.0f; // Limite de depósito

float saldo = 0.0f;

void saque(float valor) {
    if (valor > saldo) {
        cout << "Saldo insuficiente!" << endl;
    } else if (valor > LIMITE_SAQUE) {
        cout << "Valor de saque excede o limite!" << endl;
    } else {
        saldo -= valor;
        cout << "Saque realizado com sucesso! Novo saldo: R$" << saldo << endl;
    }
}

void deposito(float valor) {
    if (valor > LIMITE_DEPOSITO) {
        cout << "Valor de depósito excede o limite!" << endl;
    } else {
        saldo += valor;
        cout << "Depósito realizado com sucesso! Novo saldo: R$" << saldo << endl;
    }
}

void consultaSaldo() {
    cout << "Saldo atual: R$" << saldo << endl;
}

int main() {
    int opcao;
    float valor;

    do {
        cout << "\nMenu:\n";
        cout << "1. Saque\n";
        cout << "2. Depósito\n";
        cout << "3. Consultar Saldo\n";
        cout << "0. Sair\n";
        cout << "Escolha uma opção: ";
        
        cin >> opcao;

        switch (opcao) {
            case 1:
                cout << "Digite o valor do saque: ";
                cin >> valor;
                saque(valor);
                break;
            case 2:
                cout << "Digite o valor do depósito: ";
                cin >> valor;
                deposito(valor);
                break;
            case 3:
                consultaSaldo();
                break;
            case 0:
                cout << "Saindo...\n";
                break;
            default:
                cout << "Opção inválida!\n";
        }
    } while (opcao != 0);

    return 0;
}
