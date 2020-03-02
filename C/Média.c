#include <stdio.h>
#include <locale.h>

    void main(void){

        setlocale(LC_ALL, "Portuguese");

    int valor1,valor2,valor3;
    float media;

    printf("valor primeira nota:\n");
    scanf("%d", &valor1);

    printf("valor segunda nota: \n");
    scanf("%d", &valor2);

    printf("valor terceira nota: \n");
    scanf("%d", &valor3);

    media = (valor1+valor2+valor3)/3;

    printf("a media e: %.2f \n", media);

    if (media < 10){
        printf("reprovado");
    }

    else if (media > 10 && media < 50){
        printf("recuperação");
    }

    else {
        printf("aprovado");
    }

    }
