#include <stdio.h>

int calculo(int num){
    int fatorial = 1;
    
    if (num <= 1)
        return 1;
    
    for (int i = 2; i <= num; i++){
        fatorial *= i;
    }
    
    return fatorial;
}

void imprimirTabela(int n){
    int valor;
    
    printf("Digite %d valores inteiros positivos:\n", n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &valor);
        int dobro = valor * 2;
        int quadrado = valor * valor;
        int fatorial = calculo(valor);
        
        printf("%d\t%d\t%d\t%d\n", valor, dobro, quadrado, fatorial);
    }
}

int main(){
    int n;
    
    printf("Digite a quantidade de numeros inteiros positivos: ");
    scanf("%d", &n);
    
    imprimirTabela(n);
    
    return 0;
}
