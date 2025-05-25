#include <stdio.h>

float mediaGasto(float km, float gasto){
	float media;
	media = km / gasto;
	return media;	
}

int main(){
	
	float km, gasto, media;
	
	printf("Digite a quantidade de quilometros rodados: ");
	scanf("%f", &km);
	
	printf("Digite a quantidade de combustivel gasto: ");
	scanf("%f", &gasto);
	
	media = mediaGasto(km,gasto);
	
	printf("Media gasta pelo usuario e: %.2f",media);	
	
	return 0;
}
