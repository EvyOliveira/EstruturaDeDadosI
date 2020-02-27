#include <iostream>
#include <cstdlib>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float raio = 0, altura = 0, volume = 0;
    system("CLS");
    
    cout<< "Digite o valor do raio da base em metros: ";
    cin >> raio;
    cout <<"Digite o valor da altura em metros: ";
    cin>> altura;
    
    volume = (3.14159 * (raio * 2)) * altura;
    cout << "O volume da lata de oleo em metros cubicos e de: " << volume << endl;
    system("PAUSE");
    
	return 0;
}

