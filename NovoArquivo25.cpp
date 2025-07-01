#include <iostream>
using namespace std;

float soma(float a, float b) {
    return a + b;
}

float subtracao(float a, float b) {
    return a - b;
}

float multiplicacao(float a, float b) {
    return a * b;
}

void menu() {
    cout << "Escolha uma opera��o:\n";
    cout << "1. Soma\n";
    cout << "2. Subtra��o\n";
    cout << "3. Multiplica��o\n";
    cout << "0. Sair\n";
}

int main() {
    int opcao;
    float num1, num2;

    do {
        menu();
        cout << "Op��o: ";
        cin >> opcao;

        if (opcao > 0 && opcao < 4) {
            cout << "Digite dois n�meros: ";
            cin >> num1 >> num2;
        }

        switch (opcao) {
            case 1:
                cout << "Resultado: " << soma(num1, num2) << endl;
                break;
            case 2:
                cout << "Resultado: " << subtracao(num1, num2) << endl;
                break;
            case 3:
                cout << "Resultado: " << multiplicacao(num1, num2) << endl;
                break;
            case 0:
                cout << "Saindo...\n";
                break;
            default:
                cout << "Op��o inv�lida!\n";
        }
    } while (opcao != 0);

    return 0;
}