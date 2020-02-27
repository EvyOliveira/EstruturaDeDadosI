#include <iostream>
#include <cstdlib>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int numero = 1; int maior = 0, menor = 0;

do{
	printf("Introduza um numero: ");
	scanf("%d", &numero);
	if(numero > 0){
			if (numero > maior){maior = numero;
			}if (menor == 0){menor = numero;
			}else if(numero < menor){menor = numero;
			}
			printf("Maior valor: %d\n", maior);
	}
	}while(numero != -1);
	system("Pause");
	return 0;
}
