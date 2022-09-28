#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	// Declaramos las variables que utilizaremos como enteros.
	int numero, total;
	
	// Le mostramos un mensaje por pantalla al usuario para que introduzca hasta que número desea realizar la suma.
	printf("Introduzca hasta que número desea realizar la suma: ");
	
	/* Utilizamos la función scanf() para obtener los datos introducidos por el usuario
	deberemos de indicar el tipo de datos que se van a obtener, en este caso al ser enteros usaremos "%d"
	y la variable donde almancenaremos este valor "&numero". */
	scanf("%d", &numero);
	
	// En la variable "total" anteriormente declarada, almacenaremos el total del resultado de la fórmula para la suma.
	total = ((1 + numero) * numero) / 2;
	
	// Para terminar, mostraremos por pantalla el contenido de la variable con el resultado de la operación.
	printf("El total de la suma hasta el número indicado es de %i\n", total);
	
	// Esto permite realizar una pausa en la ejecución del programa.
	system("Pause");
	
}
