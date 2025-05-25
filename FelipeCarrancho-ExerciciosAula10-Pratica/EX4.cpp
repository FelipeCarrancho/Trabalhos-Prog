#include <stdio.h>

void calculo(char op){
	
    int n1, n2;
    
    if(op == '+' || op == '-' || op == '*' || op == '/' || op == '%'){
    	
        printf("Digite o primeiro valor inteiro: ");
        scanf("%d", &n1);
        
        printf("Digite o segundo valor inteiro: ");
        scanf("%d", &n2);
        
        switch(op){
        	
            case '+':
                printf("%d + %d = %d\n", n1, n2, n1 + n2);
                break;
            case '-':
                printf("%d - %d = %d\n", n1, n2, n1 - n2);
                break;
            case '*':
                printf("%d * %d = %d\n", n1, n2, n1 * n2);
                break;
            case '/':
                if(n2 != 0){
                    printf("%d / %d = %d\n", n1, n2, n1 / n2);
                }
                else{
                    printf("Divisor nulo\n");
                }
                break;
            case '%':
                if(n2 != 0){
                    printf("%d %% %d = %d\n", n1, n2, n1 % n2);
                }
                else{
                    printf("Divisor nulo\n");
                }
                break;
        }   
    }
    else{
        printf("Caractere invalido!\n");
    }
}

int main(){
	
    char op;
    
    printf("Digite qual operacao quer ou 'F' para encerrar: ");
    scanf(" %c", &op);
    
    while (op != 'F'){
    	
        calculo(op);
        
        printf("Digite qual operacao quer ou 'F' para encerrar: ");
        scanf(" %c", &op);
    }
    
    return 0;
}
