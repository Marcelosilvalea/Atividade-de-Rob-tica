#include <iostream>
using namespace std;

void inverterSinal(int &valor) {
    valor = -valor;
}

int main() {
    int num = 10;
    cout << "Antes: " << num << endl;
    inverterSinal(num);
    cout << "Depois: " << num << endl; // Vai mostrar -10
    return 0;
}