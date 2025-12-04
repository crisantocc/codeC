#include <stdio.h>

int main() {
	int numerosArreglos[] = {100, 200, 300, 400, 50};
	
	int largoArreglo;
	
	int tamanioArreglo = sizeof(numerosArreglos);
	printf("Tamaño arregloi: %d", tamanioArreglo);
	
	int tamanioUnElemento = sizeof(numerosArreglos[0]);
	printf("\nTamanio de un elemto del arreglo: %d", tamanioUnElemento);
	
	largoArreglo = tamanioArreglo / tamanioUnElemento;
	printf("\nLargo Arreglo: %d", largoArreglo);
	
	printf("\nIteramos los valores del arreglo: ");
	for(int i = 0; i < largoArreglo; i++){
		printf("\nArreglo[%d] = %d" , i,numerosArreglos[i]);
	}
		
	
	
	return 0;
}

