#include <stdio.h>

typedef struct{
    float peso;
    float altura;
} medidas;

int main(){
	
    medidas pessoas[6];
    float somaPeso = 0.0f, somaAltura = 0.0f;

    for (int i = 0; i < 6; i++) {
        printf("Digite a altura (em metros) da pessoa %d: ", i + 1);
        scanf("%f", &pessoas[i].altura);

        printf("Digite o peso (em quilogramas) da pessoa %d: ", i + 1);
        scanf("%f", &pessoas[i].peso);

        somaAltura += pessoas[i].altura;
        somaPeso += pessoas[i].peso;
    }

    float mediaAltura = somaAltura / 6;
    float mediaPeso = somaPeso / 6;

    printf("\nMedia da altura: %.2f metros\n", mediaAltura);
    printf("Media do peso: %.2f quilogramas\n", mediaPeso);

    return 0;
}
