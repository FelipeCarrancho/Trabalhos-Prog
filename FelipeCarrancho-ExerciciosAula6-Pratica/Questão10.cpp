#include <stdio.h>
#include <stdlib.h>

int main(){
	int l1, l2, l3;
	
	printf("Digite o primeiro lado deste triangulo: ");
	scanf("%d", &l1);
	printf("Digite o segundo lado deste triangulo: ");
	scanf("%d", &l2);
	printf("Digite o terceiro lado deste triangulo: ");
	scanf("%d", &l3);
	
	if(l1 == l2 && l1 == l3 && l2 == l3){
		printf("E um triangulo equilatero");
	}
	else if(l2 != l1 && l1 != l3 && l2 != l3){
		printf("E um triangulo escaleno");
	}
	else{
		printf("E um triangulo isosceles");
	}
	
	return 0;
}
