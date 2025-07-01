#include <iostream>
using namespace std;

template<typename T>
void trocar(T* a, T* b) {
    T temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
   int x = 5, y = 10; 
   float m = 1.5f, n = 3.5f;

   trocar(&x, &y);
   trocar(&m, &n);

   cout <<"Valores trocados (int): x="<< x <<" y="<< y<<endl; 
   cout <<"Valores trocados (float): m="<< m <<" n="<< n<<endl; 

   return 0; 
}