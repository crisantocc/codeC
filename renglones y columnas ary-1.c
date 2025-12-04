#include <stdio.h>

int main() {
   int renglones, columnas;
   printf("proporciona el numero de renglones: ");
   scanf("%d", &renglones);
   printf("\nProporciona el numero de columnas: ");
   scanf("%d", &columnas);
   
   int matriz[renglones][columnas];
   
   for(int ren = 0; ren < renglones; ren++){
	   for(int col = 0; col < columnas; col++){
	    printf("Dato[%d][%d] = ", ren, col);
	    scanf("%d" , &matriz[ren][col]);
	  }
   }
   
   printf("\n---impresione de la matriz---");
   for(int ren = 0; ren < renglones; ren++){
	   for(int col =0; col < columnas; col++){
		   printf("\nMatriz[%d]{%d] = %d", ren, col, matriz[ren][col]);
	   }
	   printf("\n");
	   
   }
   
	return 0;
}

