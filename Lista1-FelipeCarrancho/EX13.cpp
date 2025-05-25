#include <stdio.h>

int main(){
	
    float salario, finan;
    
    printf("Digite o valor do salario: ");
    scanf("%f", &salario);
    
    printf("Digite o financiamento desejado: ");
    scanf("%f", &finan);
    
    if(finan <= 5*salario){
        printf("Financiamento Concedido");
    }
    else{
        printf("Financiamento Negado");
    }
    
    return 0;
}
