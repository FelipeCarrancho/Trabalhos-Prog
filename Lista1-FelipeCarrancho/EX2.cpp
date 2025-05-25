#include <stdio.h>

float aumento(float sal, float por){
    return sal * (por/100);
}

int main(){

    float salAtual, porcen, aumen, novo;
    
    printf("Digite o salario atual: ");
    scanf("%f", &salAtual);
    
    printf("Digite a porcentagem de aumento: ");
    scanf("%f", &porcen);
    
    aumen = aumento(salAtual, porcen);
    novo = (aumen + salAtual);
    
    printf("O salario teve um aumento de: %.2f e seu salario atual sera : %.2f", aumen, novo);
    
    return 0;
}
