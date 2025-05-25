#include <stdio.h>

float salario(float salAtual, int tempo){
	
    if(tempo <= 12){
        return salAtual * 1.1;
    }
    else{
        return salAtual * 1.2;
    }
}
int main(){
	
    float salAtual, salNovo;
    int meses;
    
    printf("Digite o salario atual do funcionario: ");
    scanf("%f", &salAtual);
    
    printf("Digite o tempo em meses do funcionario: ");
    scanf("%d", &meses);
    
    salNovo = salario(salAtual, meses);
    printf("O salario novo e: %.2f", salNovo);

    return 0;
}
