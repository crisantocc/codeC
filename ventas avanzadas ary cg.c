#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	
	float ventas[10], comision[10];
	int i;
	float sumaVentas = 0, ventaMayor, ventaMenor, totalComisiones = 0;
	int vendedorMayor;
	int c3 = 0, c5 = 0, c8 = 0;
	
	srand(time(NULL));
	
	// PARTE 1: Generar ventas aleatorias
	for (i = 0; i < 10; i++) {
		ventas[i] = 500 + rand() % (10000 - 500 + 1);
	}
	
	// PARTE 2: Calcular comisiones
	for (i = 0; i < 10; i++) {
		if (ventas[i] < 2000) {
			comision[i] = ventas[i] * 0.03;
			c3++;
		} else if (ventas[i] <= 6000) {
			comision[i] = ventas[i] * 0.05;
			c5++;
		} else {
			comision[i] = ventas[i] * 0.08;
			c8++;
		}
		
		totalComisiones += comision[i];
	}
	
	// PARTE 3: Mostrar ventas y comisiones
	printf("Vendedor\tVenta\t\tComision\n");
	for (i = 0; i < 10; i++) {
		printf("%d\t\t$%.2f\t$%.2f\n", i + 1, ventas[i], comision[i]);
	}
	
	// PARTE 4: Estadísticas
	ventaMayor = ventas[0];
	ventaMenor = ventas[0];
	vendedorMayor = 1;
	
	for (i = 0; i < 10; i++) {
		sumaVentas += ventas[i];
		
		if (ventas[i] > ventaMayor) {
			ventaMayor = ventas[i];
			vendedorMayor = i + 1;
		}
		
		if (ventas[i] < ventaMenor) {
			ventaMenor = ventas[i];
		}
	}
	
	printf("\nVenta mayor: $%.2f (Vendedor %d)\n", ventaMayor, vendedorMayor);
	printf("Venta menor: $%.2f\n", ventaMenor);
	printf("Promedio de ventas: $%.2f\n", sumaVentas / 10);
	printf("Total de comisiones pagadas: $%.2f\n", totalComisiones);
	printf("Comisiones 3%%: %d\n", c3);
	printf("Comisiones 5%%: %d\n", c5);
	printf("Comisiones 8%%: %d\n", c8);
	
	// PARTE 5: Mostrar vendedores con total > 7000
	printf("\nVendedores con total mayor a $7000:\n");
	for (i = 0; i < 10; i++) {
		float total = ventas[i] + comision[i];
		if (total > 7000) {
			printf("Vendedor %d -> Total: $%.2f\n", i + 1, total);
		}
	}
	
	return 0;
}
