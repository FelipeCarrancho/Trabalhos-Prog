#include <stdio.h>

void ordenacao(int vetor[], int tamanho){
	
    int i, j;
    int ordem;

    for (i = 0; i < tamanho - 1; i++){
        for (j = 0; j < tamanho - i - 1; j++){
        	
            if (vetor[j] > vetor[j + 1]){
                ordem = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = ordem;
            }
        }
    }
}


int main(){
	
    int tamanho;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int valores[tamanho];

    printf("Digite os valores inteiros do vetor:\n");

    for (int i = 0; i < tamanho; i++){
    	
        printf("Valor %d: ", i + 1);
        scanf("%d", &valores[i]);
    }

    ordenacao(valores, tamanho);

    printf("Vetor ordenado em ordem crescente:\n");

    for (int i = 0; i < tamanho; i++){
        printf("%d ", valores[i]);
    }


    return 0;
}
