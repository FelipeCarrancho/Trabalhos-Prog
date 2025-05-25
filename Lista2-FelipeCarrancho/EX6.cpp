#include <stdio.h>

void calculo(float a, float b){
	
    float valor, soma = 0;
    int contador = 0;

    printf("Digite a sequencia de valores:\n");

    do{
        scanf("%f", &valor);

        if (valor >= a && valor <= b){
            soma += valor;
            contador++;
        }
    } while (valor >= 0);

    if (contador > 0){
        float media = soma / contador;
        printf("A media dos valores no intervalo entre %.2f e %.2f e: %.2f\n", a, b, media);
    } else {
        printf("Nao tem valores no intervalo entre %.2f e %.2f\n", a, b);
    }
}

int main(){
    float a, b;

    printf("Digite o valor de a: ");
    scanf("%f", &a);

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    calculo(a, b);

    return 0;
}
