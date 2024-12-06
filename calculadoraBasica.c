#include <stdio.h>

int sumar(int a, int b);
int restar(int a, int b);
int multiplicar(int a, int b);

int main() {
    int opcion;
    int num1, num2, resultado;
    float resDivision;

    do {
        printf("\n=== Calculadora Basica ===\n");
        printf("1. Sumar\n");
        printf("2. Restar\n");
        printf("3. Multiplicar\n");
        printf("4. Salir\n");
        printf("Selecciona una opcion: ");
        scanf("%d", &opcion);
        switch (opcion) {
            case 1:
                resultado = sumar(0, 0);
                printf("Resultado de la suma: \n\n");
                break;

            case 2:
                resultado = restar(0, 0);
                printf("Resultado de la resta: %d\n\n", &resultado);
                break;

            case 3:
                resultado = multiplicar(num1, num2);
                printf("Resultado de la multiplicacion: \n\n");
                break;
            case 4:
                resDivision = dividir(num1, num2);
                printf("Resultado de la división: %f\n\n", &resDivision);
                break;
            case 5:
                printf("Saliendo de la calculadora...\n\n");
                break;
            default:
                printf("Opcion no valida. Intenta de nuevo.\n\n");
                break;
        }
    } while (opcion != 4);
    return 0;
}

int sumar(int a, int b) {
    return 0;
}

int restar(int a, int b) {
    printf("Ingrese los números a restar\n");
    printf("Primer número: "); scanf("%d", &a); getchar();
    printf("Segundo número: "); scanf("%d", &b); getchar();
    return a-b;
}

int multiplicar(int a, int b) {
    return 0;
}

float dividir(int a, int b) {
    printf("Ingrese los número a dividir\n");
    printf("Primer número: "); scanf("%d", &a); getchar();
    printf("Segundo número: "); scanf("%d", &b); getchar();
    return a/b;
}