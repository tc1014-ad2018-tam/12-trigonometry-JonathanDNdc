/*
 * Este programa calcula las funciones trigonometricas de un angulo
 * en grados pasado a radianes. El usuario ingresa el angulo en
 * grados, el programa lo pasa a radianes y ya con eso
 * calcula todas las funciones.
 *
 * Autor: Jonathan Nuñez de Caceres.
 * Fecha: 4 de Octubre del 2018
 * Correo: A01411277@itesm.mx
 */

 // Libreria de entrada y salida estandar.
#include <stdio.h>
// Libreria de matematicas.
#include <math.h>

int main() {
    // Declaracion de variables.
    double degrees;
    double radians;


    printf("Ingresa el angulo en grados:");
    scanf("%lf", &degrees);

    // Se convierten los grados a radianes.
    radians = degrees * M_PI / 180;
    // Se calcula cada una de las funciones trigonometricas.
    printf("Seno = %lf.\n", sin(radians));
    printf("Coseno = %lf.\n", cos(radians));
    // Se checan las condiciones necesarias para que no de division entre 0.
    // Haciendo uso de la funcion redondeo ya que el valor de pi no es muy preciso.
    if(round(cos(radians) * 100) / 100 == 0){
        printf("Tangente = Indefinido.\n");
        printf("Secante = Indefinido.\n");
    } else{
        printf("Tangente = %lf.\n", tan(radians));
        printf("Secante = %lf.\n", 1/cos(radians));
    }
    if(round(sin(radians) * 100) / 100 == 0){
        printf("Cosecante = Indefinido.\n");
        printf("Cotangente = Indefinido.\n");
    } else{
        printf("Cosecante = %lf.\n", 1/sin(radians));
        printf("Cotangente = %lf.\n", 1/tan(radians));
    }

    return 0;
}