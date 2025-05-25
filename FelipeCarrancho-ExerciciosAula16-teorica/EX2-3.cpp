#include <stdio.h>

typedef struct{
    float peso;
    float altura;
} medidas;


int main(){
	
    medidas joao, maria;
    joao.altura = 1.78;
    maria.altura = 1.64;
    joao.peso = 75;
    maria.peso = 59;
    
    printf("A altura de joao eh: %.2f, e seu peso eh: %.2f", joao.altura, joao.peso);
    printf("\nA altura de maria eh: %.2f, e seu peso eh: %.2f", maria.altura, maria.peso);
    
    return 0;
}

