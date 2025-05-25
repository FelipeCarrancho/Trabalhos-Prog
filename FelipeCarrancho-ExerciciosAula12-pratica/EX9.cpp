#include <stdio.h>

#define valor 10

void calc(float vetor[], int tamanho, float escalar){
	
    int i;
    for (i = 0; i < tamanho; i++){
    	
    	vetor[i] *= escalar;
    }
}

int main(){
	
	float vetor[valor];
	float escalar;
	int i;
	
	printf("Digite um valor real para 10 vetores:");
	
	for (i = 0; i < valor; i++){
		
		scanf("%f", &vetor[i]);
	}
	
	printf("Digite o valor do escalar: ");
	scanf("%f", &escalar);
	
	calc(vetor, valor, escalar);
	
	for (i = 0; i < valor; i++){
		
		printf("Resultado e igual a %.2f ", vetor[i]);
	}
	
	return 0;
}

