
#include <stdio.h>

float suma(float a, float b) {
	return a + b;
}

float multiplicacion(float a, float b) {
    return a * b;
}

float resta(float a, float b) {
    return a - b;
}

int main() {
	int opcion;
	float num1, num2, resultado;
	do {
		printf("\nCalculadora básica\n");
		printf("1. Suma\n");
		printf("2. Resta\n");
		printf("3. Multiplicación\n");
		printf("4. División\n");
		printf("5. Salir\n");
		printf("Seleccione una opción: ");
		scanf("%d", &opcion);

		if (opcion >= 1 && opcion <= 4) {
			printf("Ingrese el primer número: ");
			scanf("%f", &num1);
			printf("Ingrese el segundo número: ");
			scanf("%f", &num2);
		}

		switch (opcion) {
			case 1:
				resultado = suma(num1, num2);
				printf("Resultado: %.2f\n", resultado);
				break;
			case 2:
				resultado = resta(num1, num2);
				printf("Resultado: %.2f\n", resultado);
				break;
			case 3:
				resultado = multiplicacion(num1, num2);
				printf("Resultado: %.2f\n", resultado);
				break;
			case 4:
				resultado = division(num1, num2);
				printf("Resultado: %.2f\n", resultado);
				break;
			case 5:
				printf("Saliendo...\n");
				break;
			default:
				printf("Opción no válida. Intente de nuevo.\n");
		}
	} while (opcion != 5);
	return 0;
}


