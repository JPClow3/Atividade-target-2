#include "library.h"
#include <stdio.h>


int main (){

    float notas[10];
    float soma = 0;
    float media;

    printf("Digite as 10 notas do aluno:\n");
    for(int i = 0; i < 10; i++) {
        printf("Nota %d: ", i+1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    media = soma / 10;

    printf("A média das notas é: %.2f\n", media);

   return 0;
}