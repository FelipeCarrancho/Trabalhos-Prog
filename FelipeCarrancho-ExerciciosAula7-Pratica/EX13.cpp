#include <stdio.h>

int main(){
	
    float valor;
    int cliente;
    
    printf("Digite o valor da compra: ");
    scanf("%f", &valor);
        
    printf("Digite o tipo de cliente (1) para comum, (2) para funcionario e (3) para vip: ");
    scanf("%d", &cliente);
    
    switch(cliente){
        case 1:
            printf("Valor total a ser pago: %.2f", valor);
            break;
        case 2:
            printf("Valor total a ser pago: %.2f", valor - valor*0.1);
            break;
        case 3:
            printf("Valor total a ser pago: %.2f", valor - valor*0.05);
            break;
        default:
            printf("Nao existe este codigo de cliente");
        }
        return 0;
    }
