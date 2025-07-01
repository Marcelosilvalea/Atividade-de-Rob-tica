#include <iostream>

int main() {
    int variavel = 10; // Declaração da variável inteira
    int* ponteiro = &variavel; // Ponteiro que aponta para a variável

    // Exibição do valor da variável e seu endereço
    std::cout << "Valor da variável: " << variavel << std::endl;
    std::cout << "Endereço da variável: " << &variavel << std::endl;
    std::cout << "Valor apontado pelo ponteiro: " << *ponteiro << std::endl;
    std::cout << "Endereço armazenado no ponteiro: " << ponteiro << std::endl;

    return 0;
}