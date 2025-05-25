#include <stdio.h>
#include <stdlib.h>

float calculaPesoIdeal(float alto, char sex){
	if(sex == 'F'){
		return (62.1*alto)-44.7;
	}
	else{
		return (72.7*alto)-58;
	}
}

int main(){
	float  altura, ideal, peso;
	char sexo;
	
	printf("Digite qual seu sexo (F ou M): ");
	scanf("%c", &sexo);
	printf("Digite sua altura: ");
	scanf("%f", &altura);
	printf("Digite seu peso: ");
	scanf("%f", &peso);
	
	
	
	ideal = calculaPesoIdeal(altura, sexo);
	
	if(ideal == peso){
		printf("Voce esta no peso ideal");
	}
	else{
		printf("Voce nao esta no peso ideal");
	}
	
	return 0;
}
