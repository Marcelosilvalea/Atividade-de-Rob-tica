#include <iostream>

void dobrarValor(int* p) {
    *p *= 2; // Dobra o valor apontado pelo ponteiro
}

int main() {
    int numero = 5;
    
    std::cout << "Valor original: " << numero << std::endl;
    
    dobrarValor(&numero); // Passa o endere�o de 'numero' para a fun��o
    
    std::cout << "Valor ap�s dobrar: " << numero << std::endl;

    return 0;
}

