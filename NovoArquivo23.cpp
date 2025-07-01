#include <iostream>
using namespace std;

double calcularMedia(int* vetor, int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }
    return static_cast<double>(soma) / tamanho;
}

int main() {
    int vetor[10] = {5, 7, 8, 6, 9, 10, 4, 6, 7, 8};
    double media = calcularMedia(vetor, 10);
    cout << "Média dos elementos: " << media << endl;
    return 0;
}
