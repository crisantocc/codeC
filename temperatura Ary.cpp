#include <stdio.h>

int main() {
	float arreglo[7];
	float temMaxima,temMinima;
	
	int temperatura;
	printf("ingrese la temperatura de los 7 dias: ");
	scanf("%d", &temperatura);
	
	int grados[gradosTemperatura];
	for(int i=0; i < 7; i++){
		printf("dia[%d] i+1 ", i);
		scanf("%d", &grados[i]);
		
	}
	
	for(int i = 0; i < gradosTemperatura; i++){
		printf("\nTemperatura[%d] = %d" , i, temperatura[i]);
	}
	
	
	return 0;
}

