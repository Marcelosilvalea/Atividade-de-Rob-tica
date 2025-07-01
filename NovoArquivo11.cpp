#include <iostream>

void dobrarValor(int* p) {
    *p *= 2; // Dobra o valor apontado pelo ponteiro
}

int main() {
    int numero = 5;
    
    std::cout << "Valor original: " << numero << std::endl;
    
    dobrarValor(&numero); // Passa o endereço de 'numero' para a função
    
    std::cout << "Valor após dobrar: " << numero << std::endl;

    return 0;
}

