#include <iostream>
#include <string>
using namespace std;

struct Pessoa {
    string nome;
    int idade;
    float altura; // em metros
};

void imprimirPessoa(Pessoa* p) {
    if (p) {
        cout << "Nome: " << p->nome 
             << ", Idade: " << p->idade 
             << ", Altura: " << p->altura 
             << endl;
    }
}

int main() {
    Pessoa p = {"João", 25, 1.75};
    
    imprimirPessoa(&p);

    return 0;
}