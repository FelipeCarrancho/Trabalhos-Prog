#include <stdio.h>

int conversor(int h){
	int min;
	min = h * 60;
	return min;
}

int main(){
	
	int horas, minutos;
	
	printf("Digite a quantidade de horas: ");
	scanf("%d", &horas);	
	
	minutos = conversor(horas);
	
	printf("%d horas e igual a %d minutos", horas, minutos);
	
	return 0;
}
