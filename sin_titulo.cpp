#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	float ventas[10];
	float comision[10];
	int i;
	
	// Contadores de comisiones
	int c3 = 0, c5 = 0, c8 = 0;
	
	// Estadísticas
	float ventaMayor, ventaMenor, promedio, sumaVentas = 0, totalComisiones = 0;
	int vendedorMayor;
	
	srand(time(NULL));
	
	// PARTE 1: Llenar el vector ventas con valores entre 500 y 10000
	for (i = 0; i < 10; i++) {
		ventas[i] = 500 + rand() % (10000 - 500 + 1);
	}
	
	// Mostrar ventas
	printf("=== VENTAS REGISTRADAS ===\n");
	for (i = 0; i < 10; i++) {
		printf("Vendedor %d: $%.2f\n", i + 1, ventas[i]);
	}
	printf("\n");
	
	// PARTE 2: Crear el vector de comisiones
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
		totalCommissions += comision[i];
	}
	
	// PARTE 3: Mostrar ambos vectores
	printf("=== VENTAS Y COMISIONES ===\n");
	printf("Vendedor\tVenta\t\tComision\n");
	for (i = 0; i < 10; i++) {
		printf("%d\t\t$%.2f\t$%.2f\n", i + 1, ventas[i], comision[i]);
	}
	printf("\n");
	
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
	
	promedio = sumaVentas / 10;
	
	printf("=== ESTADISTICAS ===\n");
	printf("Venta mayor: $%.2f (Vendedor %d)\n", ventaMayor, vendedorMayor);
	printf("Venta menor: $%.2f\n", ventaMenor);
	printf("Promedio de ventas: $%.2f\n", promedio);
	printf("Total de comisiones pagadas: $%.2f\n", totalComissions);
	printf("Comisiones 3%%: %d vendedores\n", c3);
	printf("Comisiones 5%%: %d vendedores\n", c5);
	printf("Comisiones 8%%: %d vendedores\n", c8);
	
	// PARTE 5: Mostrar vendedores con total > 7000
	printf("\n=== VENDEDORES CON TOTAL > $7000 ===\n");
	for (i = 0; i < 10; i++) {
		float total = ventas[i] + comision[i];
		if (total > 7000) {
			printf("Vendedor %d -> Venta: $%.2f, Comision: $%.2f, Total: $%.2f\n",
				   i + 1, ventas[i], comision[i], total);
		}
	}
	
	return 0;
}
