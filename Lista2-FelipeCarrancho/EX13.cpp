#include <stdio.h>

int contador(float vetor[], int tamanho){
	
    int cont = 0;

    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] < 0) {
            cont++;
        }
    }

    return cont;
}

int main(){
	
    int tamanho;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    float valores[tamanho];

    printf("Digite os valores reais dos vetores:\n");

    for (int i = 0; i < tamanho; i++){
        printf("Valor %d: ", i + 1);
        scanf("%f", &valores[i]);
    }

    int negativos = contador(valores, tamanho);

    printf("Quantidade de valores negativos: %d", negativos);

    return 0;
}
