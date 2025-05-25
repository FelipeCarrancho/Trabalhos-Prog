#include <stdio.h>

float calculo(int n){
	
    float pi = 0.0;
    int sinal = 1;

    for (int i = 0; i < n; i++){
        int divisor = 2 * i + 1;
        float termo = (float)1 / divisor * sinal;
        pi += termo;

        if (sinal == 1){
            printf("1/%d ", divisor);
        } else{
            printf("- 1/%d ", divisor);
        }

        sinal *= -1;
    }

    pi *= 4;

    return pi;
}

int main(){
    int n;
    float resultado;

    printf("Digite um valor inteiro positivo: ");
    scanf("%d", &n);

    resultado = calculo(n);
    
    printf("\nResultado: PI = %.10f", resultado);

    return 0;
}
