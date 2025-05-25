#include <stdio.h>
#include <stdlib.h>

void imprimeDivisaoInteira(int d1, int d2){
	if(d2 != 0){
		printf("%d / %d = %d", d1, d2, d1/d2);
	}
	else{
		printf("Nao foi possivel possivel fazer a divisao", d2);
	}
}
void imprimeDivisaoReal(int d1, int d2){
		if(d2 != 0){
		printf("\n%d / %d = %.2f", d1, d2, (float)d1/d2);
	}
	else{
		printf("Nao foi possivel possivel fazer a divisao", d2);
	}
}

int main(){
	int d1, d2;
	
	printf("Digite o prieiro numero inteiro: ");
	scanf("%d", &d1);
	printf("Digite o segundo numero inteiro: ");
	scanf("%d", &d2);
	
	imprimeDivisaoInteira(d1, d2);
	imprimeDivisaoReal(d1, d2);
	
	return 0;
}
