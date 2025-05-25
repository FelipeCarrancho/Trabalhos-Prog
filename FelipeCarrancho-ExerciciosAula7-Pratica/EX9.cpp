#include <stdio.h>

void classificaCaractere(char carac){
    switch(carac){
        case '+':  case '-': case '*': case '/': case '%':
        printf("Operador matematico");
        break;
        case '<':  case '>': 
        printf("Operador relacional");
        break;
        case '!':
        printf("Operador logico");
        break;
        case '&': case '=': case '"': case '(': case ')': case '{': case '}':
        printf("Outro simbolo valido em C");
        break;
        default:
        printf("Caractere nao identificado");
    };
    return;
}

int main(){
	
    char car;
    printf("Digite um caractere: ");
    scanf(" %c", &car);
    
    classificaCaractere(car);

    return 0;
}
