#include <iostream>

int soma(int a, int b) {
   return a + b;
}

int main() {
   int x = 5, y = 10;
   int resultado = soma(x, y);
   std::cout << "Soma: " << resultado << std::endl;
   return 0;
}

