#include <stdio.h>

int main() {
  
    float nota_parcial1, nota_parcial2, nota_parcial3, calificacion_examen_final, calificacion_trabajo_final, calificacion_final;

    printf("Ingrese la nota de la primera parcial: ");
    scanf("%f", &nota_parcial1);

    printf("Ingrese la nota de la segunda parcial: ");
    scanf("%f", &nota_parcial2);

    printf("Ingrese la nota de la tercera parcial: ");
    scanf("%f", &nota_parcial3);

   
    printf("Ingrese la calificacion del examen final: ");
    scanf("%f", &calificacion_examen_final);

    printf("Ingrese la calificacion del trabajo final: ");
    scanf("%f", &calificacion_trabajo_final);

    float promedio_parciales = (nota_parcial1 + nota_parcial2 + nota_parcial3) / 3;

 
    calificacion_final = (0.55 * promedio_parciales) + (0.30 * calificacion_examen_final) + (0.15 * calificacion_trabajo_final);

 
    printf("La calificacion final es: %.2f\n", calificacion_final);

    return 0;
}
