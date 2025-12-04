#include <stdio.h>

int main() {
	int numeroElementos;
	printf("proporciona el tamanio del arreglo: ");
	scanf("%d", &numeroElementos);
	
	int numeros[numeroElementos];
	for(int i=0; i < numeroElementos; i++){
		printf("Arreglo[%d] = ", i);
		scanf("%d", &numeros[i]);
		
	}
	
	for(int i = 0; i < numeroElementos; i++){
		printf("\nArreglo[%d] = %d" , i, numeros[i]);
	}
	
	
	return 0;
}

