#include <iostream>

float maior(float a, float b) {
   return (a > b) ? a : b; 
}

int main() {
   float num1, num2; 

   std::cout<<"Digite dois n�meros:"; 
   std::cin>>num1>>num2; 

   float resultado=maior(num1,num2); 

   std::cout<<"O maior n�mero �:"<<resultado<<std::endl; 

   return 0; 
}
