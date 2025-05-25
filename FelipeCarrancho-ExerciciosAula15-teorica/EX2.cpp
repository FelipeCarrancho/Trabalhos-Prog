#include <stdio.h>

int main(){
	
    char string[50];

    printf("Digite uma string: ");
    fgets(string, 50, stdin);

    char carac = string[0];

    printf("O primeiro caractere da string foi: %c\n", carac);

    return 0;
}
