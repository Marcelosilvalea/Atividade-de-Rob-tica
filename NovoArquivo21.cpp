#include <iostream>
using namespace std;

#define BONUS 500.0
//const double BONUS = 500.0;

int main() {
    double salario;
    cout << "Digite o sal�rio: ";
    cin >> salario;

    double novoSalario = salario + BONUS;
    cout << "Sal�rio com b�nus: " << novoSalario << endl;
    return 0;
}
