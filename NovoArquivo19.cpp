#include <iostream>
#include <string>
using namespace std;

void verificarSituacao(string nome, float nota) {
    cout << "Nome do aluno: " << nome << endl;
    cout << "Nota do aluno: " << nota << endl;
    
    if (nota >= 7.0) {
        cout << "Situa��o: Aprovado" << endl;
    } else {
        cout << "Situa��o: Reprovado" << endl;
    }
}

int main() {
    string nomeAluno;
    float notaAluno;

    cout << "Digite o nome do aluno: ";
    cin >> nomeAluno;

    cout << "Digite a nota do aluno: ";
    cin >> notaAluno;

    verificarSituacao(nomeAluno, notaAluno);
    
    return 0;
}

