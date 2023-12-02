#include <stdio.h>

int main() {
    // Declarar variables
    float salarioAnterior, incremento, nuevoSalario;

    // Solicitar al usuario ingresar el salario anterior
    printf("Ingrese el salario anterior del obrero: ");
    scanf("%f", &salarioAnterior);

    // Calcular el incremento (25% del salario anterior)
    incremento = 0.25 * salarioAnterior;

    // Calcular el nuevo salario
    nuevoSalario = salarioAnterior + incremento;

    // Mostrar el resultado
    printf("Nuevo salario del obrero: %.2f\n", nuevoSalario);

    return 0;
}
