#include <stdio.h>

int valores(int val){
	
	int cont = 0, i = 0, num;
	
	while (i < val ){
		
		printf("\nDigite um valor para o %d numero:", i+1);
		scanf("%d", &num);
		
		if (num < 0) {
			printf("\nEste numero e negativo.\n");
			cont++;
			i++;
		} else {
			printf("\nEste numero e positivo.\n");
			i++;
		}
	}
	printf("\nDentre os %d numeros, %d sao negativos.", val, cont);
	
}

int main(){
	
	int valor;
	printf("Digite quantos valores a serem testados :");
	scanf("%d", &valor);
	
	valores(valor);
	
	return 0;
	
}

