#include <stdio.h>
#include <stdlib.h>

float saoPositivos(float n1, float n2){
	if(n1 > 0 && n2 > 0){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	float n1, n2, p;
	
	printf("Digite o primeiro numero real: ");
	scanf("%f", &n1);
	printf("Digite o segundo numero real: ");
	scanf("%f", &n2);
	
	p = saoPositivos(n1, n2);
	
	if(p == 1){
		printf("Ambos os valores sao positivos");
	}
	else{
		printf("Ao menos um dos valores e negativo");
	}
	
	return 0;
}
