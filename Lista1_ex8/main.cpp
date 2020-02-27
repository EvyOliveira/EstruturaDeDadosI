#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int sequencia = 0;
	int a = 0 , b = 1;
	int limite = 15;

	cout << a << endl;
	cout << b << endl;
	
	for( int n = 0; n < limite; n++)
           {
               sequencia = (a + b);
               cout << sequencia  << endl;
               a = b;
               b = sequencia;
            }
	
	system("pause");
	return 0;
}
