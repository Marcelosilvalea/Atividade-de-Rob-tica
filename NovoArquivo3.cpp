#include <iostream>

int main() {
    int inteiro = 5;
    float flutuante = 5.7f;
    double duplo = 10.99;

    // Operações
    int somaIntFloat = inteiro + flutuante; //Resulta em inteiro
    float somaIntfloat = inteiro + flutuante; // Resulta em float
    double somaFloatDouble = flutuante + duplo; // Resulta em double

    std::cout<< "Soma (int + float): " << somaIntFloat<< std::endl;
	std::cout << "Soma (int + float): " << somaIntfloat << std::endl;
    std::cout << "Soma (float + double): " << somaFloatDouble << std::endl;

    return 0;
}