#include <stdio.h>

float calculo(int n) {
	int i;
    float soma = 0.0;

    if (n <= 0) {
        printf("Digite um valor inteiro positivo.\n");
        return soma;
    }

    printf("Termos gerados:\n");
    for (i = 1; i <= n; i++) {
        float termo = 1.0 / i;
        soma += termo;
        printf("1/%d = %.2f\n", i, termo);
    }

    return soma;
}

int main(){
	
    int n;
    float resultado;

    printf("Digite um valor inteiro positivo para n : ");
    scanf("%d", &n);

    resultado = calculo(n);

    printf("Valor final da soma = %.2f\n", resultado);

    return 0;
}
