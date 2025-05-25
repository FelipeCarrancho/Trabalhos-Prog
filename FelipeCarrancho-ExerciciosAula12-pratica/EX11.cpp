#include <stdio.h>

#define valor 10

void repetidos(int vetor[], int tamanho){
	
	int i, x;
	
	for (i = 0; i < tamanho - 1; i++){
		
		for (x = i + 1; x < tamanho; x++){
			
			if (vetor[i] == vetor[x]){
				
				printf("Elementos repetidos %d e %d\n", i, x);
			}
		}
	}
}
	
int main(){
	
	int vetor[valor];
	int i;
	
	printf("Digite um valor inteiro para 10 vetores:");
	
	for (i = 0; i < valor; i++){
		
		scanf("%d", &vetor[i]);
		
	}
	
	repetidos(vetor, valor);
	
	printf("\nPares de elementos repetidos: %d \n", i);

	return 0;
}

