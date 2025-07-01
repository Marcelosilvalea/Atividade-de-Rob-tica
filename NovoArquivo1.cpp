#include <iostream>

int main() {
    int num1, num2;

    std::cout << "Digite o primeiro número: ";
    std::cin >> num1;
    std::cout << "Digite o segundo número: ";
    std::cin >> num2;

    std::cout << "Soma: " << (num1 + num2) << std::endl;
    std::cout << "Subtração: " << (num1 - num2) << std::endl;
    std::cout << "Multiplicação: " << (num1 * num2) << std::endl;
    
    if(num2 != 0)
        std::cout << "Divisão: " << (static_cast<float>(num1) / num2) << std::endl; // Usando casting para float
    else
        std::cout << "Não pode ter  Divisão por zero." << std::endl;

    return 0;
}