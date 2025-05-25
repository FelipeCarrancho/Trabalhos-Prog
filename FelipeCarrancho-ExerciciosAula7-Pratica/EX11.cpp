#include <stdio.h>

int main(){
	
    int pag;
    printf("Forma de pagamento: ");
    printf("\n- A vista.");
    printf("\n-Cheque para 30 dias.");
    printf("\n-Em duas vezes.");
    printf("\n-Em tres vezes.");
    printf("\n-Em quatro vezes.");
    printf("\n-A partir de 5 vezes.");
    printf("\nEntre com a sua opcao: ");
    scanf("%d", &pag);
    
    switch(pag){
        case 1:
            printf("Desconto de 20%%.");
            break;
        case 2: case 3: case 4:
            printf("Mesmo preco a vista.");
            break;
        case 5:
            printf("Juros de 3%% mes");
            break;
        case 6:
            printf("Juros de 5%% mes");
            break;
        default:
            printf("Opcao invalida!");
        }
        return 0;
    }
