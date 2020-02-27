#include <iostream>
#include <cstdlib>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float v1 = 0, v2 = 0, media = 0;
    system("CLS");
    
    cout<< "Digite o primeiro numero positivo: ";
    cin >> v1;
    cout <<"Digite o segundo numero positivo: ";
    cin>> v2;
    media = (v1 + v2) / 2;
    cout << "A media de dois numeros e: " << media << endl;
    system("PAUSE");
    
	return 0;
}
