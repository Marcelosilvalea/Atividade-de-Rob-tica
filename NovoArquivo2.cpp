#include <iostream>
#define PI 3.14159 //vari�vel constante

int main() {
    float raio;//vari�vel real

    std::cout << "Digite o raio do c�rculo: ";
    std::cin >> raio;

    float area = PI * raio * raio; //vari�vel real com c�lculo
    std::cout << "�rea do c�rculo: " << area << std::endl;

    return 0;
}

