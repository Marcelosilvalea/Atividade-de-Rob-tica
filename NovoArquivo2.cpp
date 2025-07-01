#include <iostream>
#define PI 3.14159 //variável constante

int main() {
    float raio;//variável real

    std::cout << "Digite o raio do círculo: ";
    std::cin >> raio;

    float area = PI * raio * raio; //variável real com cálculo
    std::cout << "Área do círculo: " << area << std::endl;

    return 0;
}

