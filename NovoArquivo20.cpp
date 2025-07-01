#include <iostream>

using namespace std;

float calcularAreaRetangulo(float base, float altura){
	return base * altura;
}

int main()
{
	float base = 5.0, altura = 3.0;
	float area = calcularAreaRetangulo(base,altura);
	cout<< "A área do Retângulo é: "<<area<<endl;
	return 0;
}