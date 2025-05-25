#include <stdio.h>

int main(){
	
	float saldoIni, salario, ret1, ret2, ret3, saldoAtual;
	
	printf("Digite o saldo inicial: ");
	scanf("%f", &saldoIni);
	
	printf("Digite o seu salario: ");
	scanf("%f", &salario);
	
	saldoAtual = saldoIni + salario;
	
	printf("Digite o valor da primeira retirada: ");
	scanf("%f", &ret1);
	printf("Digite o valor da segunda retirada: ");
	scanf("%f", &ret2);
	printf("Digite o valor da terceira retirada: ");
	scanf("%f", &ret3);
	
	printf("\nExtrato Bancario\n");
	printf("Saldo Inicial: R$ %.2f\n", saldoIni);
	printf("Salario: %.2f\n", salario);
	printf("Saldo parcial: %.2f\n", saldoAtual);
	
	saldoAtual = saldoAtual - ret1;
	
	printf("1a retirada: %.2f\n", ret1);
	printf("Saldo parcial: %.2f\n", saldoAtual);
	
	saldoAtual = saldoAtual - ret2;
	
	printf("2a retirada: %.2f\n", ret2);
	printf("Saldo parcial: %.2f\n", saldoAtual);
	
	saldoAtual = saldoAtual - ret3;
	
	printf("3a retirada: %.2f\n", ret3);
	printf("Saldo final: %.2f\n", saldoAtual);
	
	return 0;
}
