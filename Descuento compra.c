#include <stdio.h>

int main() {
    
    float totalCompra, descuento, montoFinal;

    printf("Ingrese el total de la compra: ");
    scanf("%f", &totalCompra);

    descuento = 0.15 * totalCompra;

    montoFinal = totalCompra - descuento;

    printf("Monto final a pagar: %.2f\n", montoFinal);

    return 0;
}
