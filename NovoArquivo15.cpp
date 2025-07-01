#include <iostream>
#include <string>

using namespace std;

void trocar(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
int main(){
	int a = 12, b = 17;
	cout << "Valores antes da troca a = " << a <<" b = "<< b << std::endl; 
	trocar(a,b);
	cout << "Valores depois da troca a = " << a <<" b = " << b << std::endl;
	
	return 0;
}