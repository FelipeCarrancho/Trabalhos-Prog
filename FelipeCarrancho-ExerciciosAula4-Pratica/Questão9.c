#include <stdio.h>
#include <math.h>

float desconto(float preco){
    return preco * 75/100;
}

int main(){
	
    float preco, desc;
    printf("Digite o preco do produto: ");
    scanf("%f", &preco);

    desc = desconto(preco);
    
    printf("O valor com desconto e de %.2f", desc);
    
    return 0;
}
