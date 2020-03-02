#include <stdio.h>

void main (void){

    float km, litros, resultado;

    printf("informe a quilometragem: \n");
    scanf("%f", &km);

    printf("informe os litros: \n");
    scanf("%f", &litros);

    resultado = km/litros;

    printf("km por litros e: %.2f", resultado);


}
