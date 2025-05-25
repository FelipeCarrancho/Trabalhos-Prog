#include <stdio.h>
#include <math.h>

int numModulo(int num){
	
    return fabs(num);
}

int main(){
	
    int n, mod;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    
    mod = numModulo(n);
    
    printf("O mudulo de %d e %d", n, mod);
    
    return 0;
}
