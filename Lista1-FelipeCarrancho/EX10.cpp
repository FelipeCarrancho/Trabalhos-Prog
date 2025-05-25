#include <stdio.h>

void verifica (float n){
    if (n > 0){
        printf("E Positivo");
    }
	else if (n < 0){
        printf("E Negativo");
    }
	else if(n == 0){
        printf("E Neutro (zero)");
    }
    return;
}

int main(){
	
    float n;
    
    printf("Digite um numero real: ");
    scanf("%f", &n);

    verifica(n);

    return 0;
}
