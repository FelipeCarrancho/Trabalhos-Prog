#include <stdio.h>

int main(){
	
    float n1, n2;
    char oper;
    printf("Digite o primeiro valor: ");
    scanf("%f", &n1);
    printf("Digite o segundo valor: ");
    scanf("%f", &n2);
    printf("Digite a operação desejada (+,-,*,/) : ");
    scanf(" %c", &oper);
    
    switch(oper){
        case '+':
            printf("%.2f + %.2f = %.2f", n1, n2, n1+n2);
            break;
        case '-':
            printf("%.2f - %.2f = %.2f", n1, n2, n1-n2);
            break;
        case '*':
            printf("%.2f * %.2f = %.2f", n1, n2, n1*n2);
            break;
        case '/':
            printf("%.2f / %.2f = %.2f", n1, n2, n1/n2);
            break;
        default:
            printf("Operacao invalida no momento!");
        }
        return 0;
    }
