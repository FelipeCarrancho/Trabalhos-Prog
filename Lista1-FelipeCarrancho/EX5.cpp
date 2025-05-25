#include <stdio.h>

void conta(int quilowatt){
	
	float valor,valorPagar;
	
    valor = quilowatt*0.46;
    valorPagar = valor + (valor*0.18);
	
	printf("Valor a ser pago: %.2f", valorPagar);

}

int main(){
	
	int quilowatt;
	
	printf("Digite a quantidade de quilowatts: ");
	scanf("%d", &quilowatt);	
	
	conta(quilowatt);
	
	return 0;
}
