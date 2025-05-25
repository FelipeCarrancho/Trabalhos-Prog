#include <stdio.h>

int main(){
	
    char string[50];
    
    printf("Digite uma string: ");
    scanf("%s", string);

    printf("Os 3 primeiros caracteres da string sao: %.3s\n", string);

    return 0;
}
