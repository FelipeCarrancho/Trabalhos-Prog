#include <stdio.h>

int main(){
	
    char string[50];

    printf("Digite uma string: ");
    fgets(string,  50, stdin);

    printf("A string digitada foi: %s", string);

    return 0;
}
