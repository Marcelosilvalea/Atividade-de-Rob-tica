#include <iostream>
using namespace std;

void alterar(int valor, int &referencia) {
    valor += 10; // altera o valor local
    referencia += 10; // altera o valor da vari�vel referenciada
}

int main() {
    int a = 5;
    int b = 10;
    
    alterar(a, b);
    
    cout << "Valor de a (por valor): " << a << endl;
    cout << "Valor de b (por refer�ncia): " << b << endl;
    
    return 0;
}