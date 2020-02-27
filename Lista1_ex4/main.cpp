#include <iostream>
#include <cstdlib>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float a = 0, b = 0, c = 0, d = 0;
	float opAB = 0, opAC = 0, opAD = 0;
	float opBA = 0, opBC = 0, opBD = 0;
	float opCA = 0, opCB = 0, opCD = 0;
	float opDA = 0, opDB = 0, opDC = 0;
	
    system("CLS");
    
    cout<< "Digite o primeiro numero: ";
    cin >> a;
    cout<< "Digite o segundo numero: ";
    cin >> b;
    cout<< "Digite o terceiro numero: ";
    cin >> c;
    cout<< "Digite o quarto numero: ";
    cin >> d;

    opAB = ((a + b) * (a - b));
    cout << "A distributiva entre A e B e: " << opAB << endl;
 	opAC = ((a + c) * (a - c)); 
    cout << "A distributiva entre A e C e: " << opAC << endl;
    opAD = ((a + d) * (a - d));
    cout << "A distributiva entre A e D e: " << opAD << endl; 
    
    opBA = ((b + a) * (b - a));
    cout << "A distributiva entre B e A e: " << opBA << endl;  
    opBC = ((b + c) * (b - c)); 
    cout << "A distributiva entre B e C e: " << opBC << endl;   
    opBD = ((b + d) * (b - d));
    cout << "A distributiva entre B e D e: " << opBD << endl;
    
    opCA = ((c + a) * (c - a));
    cout << "A distributiva entre C e A e: " << opCA << endl;    
    opCB = ((c + b) * (c - b));
    cout << "A distributiva entre C e B e: " << opCB << endl; 
    opCD = ((c + d) * (c - d));
    cout << "A distributiva entre C e D e: " << opCD << endl;
    
    opDA = ((d + a) * (d - a));
    cout << "A distributiva entre D e A e: " << opDA << endl;    
    opDB = ((d + b) * (d - b));
    cout << "A distributiva entre D e B e: " << opDB << endl; 
    opDC = ((d + c) * (d - c));
    cout << "A distributiva entre D e C e: " << opDC << endl;
       
    system("PAUSE");
    
	return 0;
}

