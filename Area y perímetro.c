#include <stdio.h>

int main() {

    float longitud, ancho, area, perimetro;

    printf("Ingrese la longitud del rectángulo: ");
    scanf("%f", &longitud);

    printf("Ingrese el ancho del rectángulo: ");
    scanf("%f", &ancho);

    area = longitud * ancho;
    perimetro = 2 * (longitud + ancho);

    printf("Área del rectángulo: %.2f\n", area);
    printf("Perímetro del rectángulo: %.2f\n", perimetro);

    return 0;
}
