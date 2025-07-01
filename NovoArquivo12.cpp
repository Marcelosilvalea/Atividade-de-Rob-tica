#include <iostream>

void trocarValores(int* a, int* b) {
    int temp = *a; // Armazena o valor de 'a'
    *a = *b;       // Atribui o valor de 'b' a 'a'
    *b = temp;     // Atribui o valor armazenado a 'b'
}

int main() {
    int x = 10, y = 20;

    std::cout << "Antes da troca: x = " << x << ", y = " << y << std::endl;

    trocarValores(&x, &y); // Passa os endereços das variáveis

    std::cout << "Depois da troca: x = " << x << ", y = " << y << std::endl;

    return 0;
}
