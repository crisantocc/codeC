#include <stdio.h>

int main() {
	int n, opcion, repetir;
	
	do {
		printf("Ingrese el tamano del vector (1 - 100): ");
		scanf("%d", &n);
		
	
		while (n <= 0 || n > 100) {
			printf("Tamano invalido. Debe ser entre 1 y 100. Intente nuevamente: ");
			scanf("%d", &n);
		}
		
		int vector[n];
		
		printf("\n--- Captura de valores del vector ---\n");
		for (int i = 0; i < n; i++) {
			printf("Elemento [%d]: ", i + 1);
			scanf("%d", &vector[i]);
		}
		
		printf("\nVector original: ");
		for (int i = 0; i < n; i++) {
			printf("%d ", vector[i]);
		}
		printf("\n");
		
		do {
			printf("\nComo desea ordenar el vector?\n");
			printf("1. Ascendente\n");
			printf("2. Descendente\n");
			printf("Seleccione una opcion: ");
			scanf("%d", &opcion);
			
			if (opcion != 1 && opcion != 2) {
				printf("Opcion invalida. Intente nuevamente.\n");
			}
		} while (opcion != 1 && opcion != 2);
		
		for (int i = 0; i < n - 1; i++) {
			for (int j = 0; j < n - 1 - i; j++) {
				if ((opcion == 1 && vector[j] > vector[j + 1]) ||
					(opcion == 2 && vector[j] < vector[j + 1])) {
					int temp = vector[j];
					vector[j] = vector[j + 1];
					vector[j + 1] = temp;
				}
			}
		}

		printf("\nVector ordenado: ");
		for (int i = 0; i < n; i++) {
			printf("%d ", vector[i]);
		}
		printf("\n");
		

		printf("\nDesea capturar otro vector? (1. Si / 2. No): ");
		scanf("%d", &repetir);
		
	} while (repetir == 1);
	
	printf("\nPrograma finalizado.\n");
	return 0;
}
