#include <iostream>

int main() {
    int num1, num2;

    std::cout << "Digite o primeiro n�mero: ";
    std::cin >> num1;
    std::cout << "Digite o segundo n�mero: ";
    std::cin >> num2;

    std::cout << "Soma: " << (num1 + num2) << std::endl;
    std::cout << "Subtra��o: " << (num1 - num2) << std::endl;
    std::cout << "Multiplica��o: " << (num1 * num2) << std::endl;
    
    if(num2 != 0)
        std::cout << "Divis�o: " << (static_cast<float>(num1) / num2) << std::endl; // Usando casting para float
    else
        std::cout << "N�o pode ter  Divis�o por zero." << std::endl;

    return 0;
}