#include <iostream>

bool ehPar(int numero) {
   return numero % 2 == 0;
}

int main() {
   int numero;
   std::cout << "Digite um n�mero: ";
   std::cin >> numero;
   ;

   if (ehPar (numero)) {
       std::cout << numero << " � par."<<std::endl; 
   } 
   else {
       std::cout<< numero <<" � �mpar."<<std::endl; 
   }
   
   return 0; 
}