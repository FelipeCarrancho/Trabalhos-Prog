#include <stdio.h>

int busca(int vetor[], int tamanho){
	
    int maior = vetor[0];

    for (int i = 1; i < tamanho; i++){
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }
    return maior;
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

    int maior = busca(valores, tamanho);

    printf("Maior elemento do vetor: %d\n", maior);

    return 0;
}
