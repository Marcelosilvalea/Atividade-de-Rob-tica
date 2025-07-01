#include <iostream>
using namespace std;

#define BONUS 500.0
//const double BONUS = 500.0;

int main() {
    double salario;
    cout << "Digite o salário: ";
    cin >> salario;

    double novoSalario = salario + BONUS;
    cout << "Salário com bônus: " << novoSalario << endl;
    return 0;
}
