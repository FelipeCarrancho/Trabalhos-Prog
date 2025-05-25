#include <stdio.h>

void verifica(int n){
	
    if (n % 10 == 0) {
        printf("Metade de %d e: %d", n,  n / 2);
    }
	else {
        printf("O numero digitado nao termina com 0");
    }
    return;
}

int main(){

    int n;
    
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);
    
    verifica(n);
    
    return 0;
}
