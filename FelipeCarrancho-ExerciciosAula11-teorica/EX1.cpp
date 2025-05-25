#include <stdio.h>

float valor(){ 

    int p;
    float preco, total = 0;
    
    printf("Digite a quantidade de produto: ");
    scanf("%d", &p);
    printf("Digite o valor do produto: ");
    scanf("%f", &preco);
    
    while(p>0){
    	
        total = total + preco*p;
        
        printf("Digite a quantidade de produto: ");
        scanf("%d", &p);
        printf("Digite o valor do produto: ");
        scanf("%f", &preco);
    }
    return total;
}

int main(){
	
    float compra;
    compra = valor();
    printf("Valor total da compra: %.2f", compra);

    return 0;
}
