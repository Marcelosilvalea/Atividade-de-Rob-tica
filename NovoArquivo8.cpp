#include <iostream>

float calcularQuadrado(float numero) {
   return numero * numero; 
}

int main() {
   float num; 
   std::cout<<"Digite um n�mero:"; 
   std::cin>>num; 
   
   float resultado=calcularQuadrado(num); 
   
   std::cout<<"O quadrado de "<<num<<" � "<<resultado<<std::endl; 
   
   return 0; 
}