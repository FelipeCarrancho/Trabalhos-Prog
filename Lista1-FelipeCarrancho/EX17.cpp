#include <stdio.h>

void selecao(int codigo, float n1, float n2){
	
	switch (codigo){
		case 1:
			printf("%.2f + %.2f = %.2f", n1, n2, n1+n2);
			break;
		case 2:
			printf("%.2f x %.2f = %.2f", n1, n2, n1*n2);
			break;
		case 3:
			printf("%.2f / %.2f = %.2f", n1, n2, n1/n2);
			break;
		default:
			printf("Codigo Invalido!");
	}
	return;
}

int main(){

	float n1, n2;
	int codigo;
	
	printf("Digite dois numeros reais: ");
	scanf("%f %f", &n1, &n2);
	
	printf("\n Digite o codigo para realizar algumas operacoes");
	printf("\n 1 -> Soma os dois numeros");
	printf("\n 2 -> Multiplica os dois numeros");
	printf("\n 3 -> Divide o primeiro pelo segundo");
	printf("\n Informe o codigo: ");
	scanf("%d", &codigo);
	
	selecao(codigo, n1, n2);
	
	return 0;
}
