#include <stdio.h>

void calculo(int num){
	
	printf("Divisores de %d: ", num);
	
	for (int divisor = 1; divisor <= num; divisor++){
		if (num % divisor == 0){
			printf("%d ", divisor);
		}
	}
}

int main(){
	
	int num;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &num);
	
	calculo(num);
	
	return 0;
}
