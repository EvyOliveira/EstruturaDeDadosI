#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int num = 1, soma = 0;

    while(num <= 100)
    {
        soma = soma + num;
        num++;
        
    }
	
	printf ("O resultado da soma do intervalo entre 1 e 100 e: %d\n", soma);
	
	system("pause");
	return 0;
}
