#include <stdio.h>

int calculo(int vetor[], int tamanho){
	
    int soma = 0;

    for (int i = 0; i < tamanho; i++){
        soma += vetor[i];
    }

    return soma;
}

int main(){
	
    int tamanho;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int valores[tamanho];

    printf("Digite os valores do vetor:\n");

    for (int i = 0; i < tamanho; i++){
        printf("Valor %d: ", i + 1);
        scanf("%d", &valores[i]);
    }

    int resultado = calculo(valores, tamanho);

    printf("A soma dos elementos do vetor e: %d\n", resultado);

    return 0;
}
