#include <stdio.h>

int main() {
	
	int numerosArreglos[]= {100, 200, 300, 400, 500,};
	
	
	printf("Iteramos los valores del arreglo: ");
	for(int i = 0; i < 5; i++){
		printf("\nArreglo[%d] = %d = %d", i, numerosArreglos[i]);
	};
	
	return 0;
}

