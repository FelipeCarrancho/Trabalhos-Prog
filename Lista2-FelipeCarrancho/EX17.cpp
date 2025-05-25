#include <stdio.h>

void busca(int vetor[], int tamanho, int x){
	
	int i;
	int retorno = 0;
	
	for( i=0; i < tamanho ; i++)
	{
		if (x==vetor[i]){
			
			printf("%d", i);
			retorno++;
		}
	}
	if (retorno==0){
			printf("-1");
		}
}

int main(){
	
	int tamanho = 1; 
	int vetor[tamanho];
	int i; 
	int x;
	
	printf("Digite o tamanho do vetor: ");
	scanf ("%d",&tamanho);
	
	printf("Digite o valor a ser encontrado: ");
	scanf("%d",&x);
	
	for( i=0; i<tamanho; i++){
		
		printf("Digite o %d valor do vetor:",i);
		scanf("%d",&vetor[i]);
	}
	
	busca(vetor, tamanho, x);
	
	return 0;
}
