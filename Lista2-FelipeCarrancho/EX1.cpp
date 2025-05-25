#include <stdio.h>

void calculo(int x, int y){
	
	int i;
	int somaPares = 0;
	int multiplicacaoImpares = 1;
	
	if (x % 2 == 0){
		somaPares += x;
	} else {
		multiplicacaoImpares *= x;
	}
	for (i = x + 1; i <= y; i++){
			if (i % 2 == 0){
				somaPares += i;
			} else {
			multiplicacaoImpares *= i;
		}
		
		printf("Soma dos pares: %d\n", somaPares);
		printf("Multiplicacao dos impares: %d\n", multiplicacaoImpares);
	}
}
										
int main(){
	int x, y;
	
	printf("Digite o valor de X: ");
	scanf("%d", &x);
	
	printf("Digite o valor de Y (deve ser maior que X): ");
	scanf("%d", &y);
	
	calculo(x, y);
	
	return 0;
}


