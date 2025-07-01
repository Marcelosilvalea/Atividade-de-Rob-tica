#include <iostream>
using namespace std;

void incrementar(int* p) {
    (*p) += 2; // Incrementa o valor apontado por p
}

int main() {
    int num = 5;
    
    incrementar(&num); // Passa o endereço de num
    
    cout << "Valor após incremento: " << num << endl; 
    
    return 0;
}