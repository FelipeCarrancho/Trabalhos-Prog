#include <stdio.h>

float calculo( float peso, float altura){
	
	float imc;
	imc = peso / (altura * altura);
	return imc;
}

int main(){

	float peso, altura, imc;
	
	printf("Digite o peso em kg: ");
	scanf("%f", &peso);
	
	printf("Digite a altura em m: ");
	scanf("%f", &altura);
	
	imc = calculo(peso, altura);
	
	printf("Valor do IMC e: %.2f", imc);
	
	return 0;
}
