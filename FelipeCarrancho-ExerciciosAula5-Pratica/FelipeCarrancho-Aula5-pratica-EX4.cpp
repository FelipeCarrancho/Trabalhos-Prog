#include <stdio.h>
#include <stdlib.h>

void prazo(float valor, int parcela){
    printf("Valor da parcela a prazo: %.2f", valor/parcela);
    return;
}

int main(){
	
    float valor;
    int parcela;
    
    printf("Valor da compra: ");
    scanf("%f", &valor);
    printf("Numero de parcelas: ");
    scanf("%d", &parcela);
    
    prazo(valor, parcela);


    return 0;
}
