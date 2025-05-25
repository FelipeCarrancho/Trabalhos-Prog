#include <stdio.h>

float calcularE(int n) {
    float E = 0.0;
    
    for (int i = 1; i <= n; i++) {
        E += 1.0 / i;
    }
    
    return E;
}

int main(){
	
    int n;
    
    printf("Digite um valor inteiro e positivo para N: ");
    scanf("%d", &n);
    
    if (n > 0) {
        float resultado = calcularE(n);
        printf("O valor de E para N = %d e %f\n", n, resultado);
    } else {
        printf("N deve ser um valor inteiro e positivo.\n");
    }
    
    return 0;
}

