#include <stdio.h>

#define valor 10

void verifica(int vetor[], int tamanho){
	
	int i;
	
	for (i = 0; i < tamanho; i += 2){
		
		if (vetor[i] % 2 != 0){
			
			printf("%d ", vetor[i]);
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
	
	printf("\nOs valores impares nos indices pares:");
	
	verifica(vetor, valor);
	
	return 0;
}
