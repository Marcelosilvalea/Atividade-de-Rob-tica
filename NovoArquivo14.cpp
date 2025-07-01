#include <iostream>

void verificarAprovacao(float* nota) {
    if (*nota >= 7) {
        std::cout << "Aluno aprovado!" << std::endl;
    } else {
        std::cout << "Aluno reprovado!" << std::endl;
    }
}

int main() {
    float nota;

    std::cout << "Digite a nota do aluno: ";
    std::cin >> nota;

    verificarAprovacao(&nota); // Passa o endereço da nota

    return 0;
}