#include <stdio.h>

float somar(float n1, float n2){
    return (n1+n2);
}

int main(){
	
	float n1, n2, soma;
	
	printf("Digite o primeiro numero inteiro: ");
	scanf("%f", &n1);
	
	printf("Digite o segundo numero inteiro: ");
	scanf("%f", &n2);
	
	soma = somar(n1,n2);
	
    printf("A soma da: %.2f", soma);
    
    return 0;
}
