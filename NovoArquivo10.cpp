#include <iostream>

int main() {
    int variavel = 10; // Declara��o da vari�vel inteira
    int* ponteiro = &variavel; // Ponteiro que aponta para a vari�vel

    // Exibi��o do valor da vari�vel e seu endere�o
    std::cout << "Valor da vari�vel: " << variavel << std::endl;
    std::cout << "Endere�o da vari�vel: " << &variavel << std::endl;
    std::cout << "Valor apontado pelo ponteiro: " << *ponteiro << std::endl;
    std::cout << "Endere�o armazenado no ponteiro: " << ponteiro << std::endl;

    return 0;
}