#include <iostream>
using namespace std;

void incrementar(int* p) {
    (*p) += 2; // Incrementa o valor apontado por p
}

int main() {
    int num = 5;
    
    incrementar(&num); // Passa o endere�o de num
    
    cout << "Valor ap�s incremento: " << num << endl; 
    
    return 0;
}