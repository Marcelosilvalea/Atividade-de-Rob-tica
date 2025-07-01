#include <iostream>
using namespace std;

float calcularMedia(float nota1, float nota2, float nota3) {
    return (nota1 + nota2 + nota3) / 3;
}

int main() {
    float n1, n2, n3;
    
    cout << "Digite a primeira nota: ";
    cin >> n1;
    
    cout << "Digite a segunda nota: ";
    cin >> n2;
    
    cout << "Digite a terceira nota: ";
    cin >> n3;
    
    float media = calcularMedia(n1, n2, n3);
    
    cout << "A média é: " << media << endl;
    
    return 0;
}