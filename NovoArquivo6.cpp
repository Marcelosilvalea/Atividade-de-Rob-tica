#include <iostream>

bool ehPar(int numero) {
   return numero % 2 == 0;
}

int main() {
   int numero;
   std::cout << "Digite um número: ";
   std::cin >> numero;
   ;

   if (ehPar (numero)) {
       std::cout << numero << " é par."<<std::endl; 
   } 
   else {
       std::cout<< numero <<" é ímpar."<<std::endl; 
   }
   
   return 0; 
}