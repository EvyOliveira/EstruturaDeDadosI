#include <iostream>
#include <cstdlib>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float celsius = 0, fahrenheit = 0;
    system("CLS");
    
    cout<< "Digite a temperatura em graus centigrados: ";
    cin >> celsius;
    
    fahrenheit = (9 * celsius + 160) / 5;
    cout << "A temperatura convertida em graus Fahrenheit e: " << fahrenheit << endl;
    system("PAUSE");
    
	return 0;
}
