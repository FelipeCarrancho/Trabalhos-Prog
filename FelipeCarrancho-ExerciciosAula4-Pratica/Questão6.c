#include <stdio.h>
#include <math.h>

int potencia(int base, int pot){
    return pow(base, pot);
}

int main(){
	
    int n, expo, pot;
    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("Digite o expoente: ");
    scanf("%d", &pot);
    
    expo = potencia(n, pot);
    
    printf("A potencia(%d, %d) e %d", n, pot, expo);
    
    return 0;
}
