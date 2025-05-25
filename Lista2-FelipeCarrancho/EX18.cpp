#include <stdio.h>

float calculo(float vetor[], int tamanho){
	
    float soma = 0.0;

    for (int i = 0; i < tamanho; i++){
        soma += vetor[i];
    }

    float media = soma / tamanho;
    return media;
}

int main(){
	
    int tamanho;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    float vetor[tamanho];

    printf("Digite os valores do vetor reais:\n");

    for (int i = 0; i < tamanho; i++){
        printf("Valor %d: ", i + 1);
        scanf("%f", &vetor[i]);
    }

    float media = calculo(vetor, tamanho);

    printf("A media dos valores do vetor sao: %.2f\n", media);

    return 0;
}
