#include <stdio.h>

int main(){
	
    float salBruto, salLiquido, valorHora, horaExtra;
    
    printf("Digte o salario do funcionario: ");
    scanf("%f", &salBruto);
    
    printf("Digite o valor das horas extras: ");
    scanf("%f", &valorHora);
    
    printf("Digite a quatas horas extras fez: ");
    scanf("%f", &horaExtra);
    
    
    salLiquido = salBruto + valorHora - ((horaExtra) * 0.08);
    
    printf("O salario liquido do funcionario e: %.2f", salLiquido);
    return 0;
}
