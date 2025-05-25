#include <stdio.h>

void preencher(float vetor[], int tamanho){
	
    int i;
    int indice = 0;
    float valor;

    printf("Digite os valores reais do vetor:\n");

    for (i = 0; i < tamanho; i++){
    	
        printf("Valor %d: ", i + 1);
        scanf("%f", &valor);

        if (valor < 0){
            printf("Valor negativo ignorado.\n");
            continue;
        }

        vetor[indice] = valor;
        indice++;

        if (indice == tamanho){
            printf("Vetor preenchido completamente.\n");
            break;
        }
    }
}

int main(){
	
    int tamanho;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    float vetor[tamanho];

    preencher(vetor, tamanho);
    
    for (int i = 0; i < tamanho; i++){
    	
        printf("%.2f ", vetor[i]);
    }

    return 0;
}
