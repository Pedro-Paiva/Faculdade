#include <stdio.h>

 void main(void) {

    float km,resultado,litros;

    printf("digite a quilometragem percorrida: \n");
    scanf("%f", &km);

    printf("digite quantos litros gastos: \n");
    scanf("%f", &litros);

    resultado = km/litros;

    printf("km por litros: %.2f \n", resultado);


     }
