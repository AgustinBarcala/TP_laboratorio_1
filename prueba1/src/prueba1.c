/***************************************************
  1. Ingresar Kil�metros: ( km=x)
2. Ingresar Precio de Vuelos: (Aerol�neas=y, Latam=z)
- Precio vuelo Aerol�neas:
- Precio vuelo Latam:
3. Calcular todos los costos:
a) Tarjeta de d�bito (descuento 10%)
b) Tarjeta de cr�dito (inter�s 25%)
c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos)
d) Mostrar precio por km (precio unitario)
e) Mostrar diferencia de precio ingresada (Latam - Aerol�neas)
4. Informar Resultados
�Latam:
a) Precio con tarjeta de d�bito: r
b) Precio con tarjeta de cr�dito: r
c) Precio pagando con bitcoin : r
d) Precio unitario: r
Aerol�neas:
a) Precio con tarjeta de d�bito: r
b) Precio con tarjeta de cr�dito: r
c) Precio pagando con bitcoin : r
d) Precio unitario: r
La diferencia de precio es : r �
5. Carga forzada de datos
6. Salir

*************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int numero;

	printf("seleccione una opcion (1-6): ");
	scanf("%d" ,&numero);

	switch(numero){
	case 1:
		printf("selecciono la opcion 1");
		break;

	case 2:
		printf("selecciono la opcion 2");
		break;

	case 3:
		printf("selecciono la opcion 3");
		break;

	case 4:
		printf("selecciono la opcion 4");
		break;

	case 5:
		printf("selecciono la opcion 5");
		break;

	case 6:
		printf("selecciono la opcion 6");
		break;

	default: printf("no ingreso un numero valido");
	}



	return 0;
}









