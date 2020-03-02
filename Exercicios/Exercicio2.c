#include <stdio.h>
#include <math.h>
#include <locale.h>
void main(void){

    setlocale(LC_ALL, "Portuguese");


float peso, altura, imc;

printf("Informe seu peso: \n");
scanf("%f", &peso);

printf("informe a sua altura: \n");
scanf("%f", &altura);

imc = peso/ pow(altura, 2);

printf("seu imc e: %2.f \n", imc);

if(imc < 18.5){ //menor que 18,5	baixo peso
        printf("Abaixo do Peso");
}

else if(imc >= 18.5 && imc <= 24.9){  //entre 18,5 e 24,9 intervalo normal
    printf("Intervalo de Peso Normal");
}

else if(imc >= 25 && imc <= 29.9){  //entre 25 e 29,9	sobrepeso
    printf("Sobre Peso");
}

else if(imc >= 30 && imc <= 34.9){  //entre 30 e 34,9 obesidade classe I
    printf("Obessidade Classe I");
}

else if(imc >= 35 && imc <= 39.9){  //entre 35 e 39,9 obesidade classe II
    printf("Obessidade Classe II");
}

else{  //maior que 40 obesidade classe III
    printf("Obessidade Classe III");
}



}
