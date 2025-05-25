#include <stdio.h>
#include <math.h>

float quantidadeSalario(float salarioFuncionario, float salarioMinimo){
    return salarioFuncionario/salarioMinimo;
}

int main(){
	
    float salarioMinimo, salarioFuncionario, quantidade;
    salarioMinimo = 1320.00;
    printf("Digite o salario do funcionario: ");
    scanf("%f", &salarioFuncionario);

    quantidade = quantidadeSalario(salarioFuncionario, salarioMinimo);
    
    printf("%.2f eh equivalente a %.2f salarios minimos", salarioFuncionario, quantidade);
    
    return 0;
}
