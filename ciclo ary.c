#include <stdio.h>

int main() {
	int numeroElementos;
	printf("proporciona el tamanio del arreglo");
	scanf("%d" , &numeroElementos);
	int numero[numeroElementos];
	for(int i=0; i < numeroElementos; i++){
		printf("Arreglo[%d] = ", i);
		scanf("%d", &numero[i]);
	}
	for(int i =0; i< numeroElementos; i++){
		printf("\nArreglo[%d] = %d", i,numero [i]);
	}
	
	
	return 0;
}

