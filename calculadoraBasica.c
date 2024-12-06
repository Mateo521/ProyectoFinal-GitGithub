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
        printf("4. Dividir\n");
        printf("5. Salir\n");
        printf("Selecciona una opcion: ");
        scanf("%d", &opcion);

        printf("ingrese el primer valor\n");
        scanf("%d", &num1);

        printf("ingrese el segundo valor\n");
        scanf("%d", &num2);
        scanf("%d", &opcion); getchar();

        printf("Ingrese el primer valor: ");
        scanf("%d", &num1); getchar();
        printf(":ngrese el segundo valor: ");
        scanf("%d", &num2); getchar();

        switch (opcion) {
            case 1:





                resultado = sumar(num1, num2);
                printf("Resultado de la suma: %d \n\n"  , resultado);
                resultado = sumar(num1, num2);
                printf("Resultado de la suma: %d \n\n"  , resultado);
                break;

            case 2:
                resultado = restar(num1, num2);
                printf("Resultado de la resta: %d\n\n", resultado);
                break;

            case 3:
                resultado = multiplicar(num1, num2);
                printf("Resultado de la multiplicacion: %d \n\n", resultado);
                break;

            case 4:
                resDivision = dividir(num1, num2);
                printf("Resultado de la división: %f\n\n", resDivision);
                break;

            case 5:
                printf("Saliendo de la calculadora...\n\n");
                break;

            default:
                printf("Opcion no valida. Intenta de nuevo.\n\n");
                break;
        }
    } while (opcion != 5);
    return 0;
}

int sumar(int a, int b) {
    return a+b;
}

int restar(int a, int b) {
    return a-b;
}

int multiplicar(int a, int b) {
    return a*b;
}

float dividir(int a, int b) {
    return a/b;
}