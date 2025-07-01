#include <iostream>

void exibirVetor(int* vetor, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        std::cout << vetor[i] << " "; // Exibe cada elemento do vetor
    }
    std::cout << std::endl;
}

int main() {
    int meuVetor[5] = {1, 2, 3, 4, 5};

    std::cout << "Elementos do vetor: ";
    exibirVetor(meuVetor, 5); // Chama a função passando o vetor

    return 0;
}

