#include <iostream>
#include <string>

int main() {
    std::string nome;
    int idade;

    std::cout << "Digite seu nome: ";
    getline(std::cin, nome);
    
    std::cout << "Digite sua idade: ";
    std::cin >> idade;

    std::cout << "Ol�, " << nome << "! Voc� tem " << idade << " anos." << std::endl;

    return 0;
}
