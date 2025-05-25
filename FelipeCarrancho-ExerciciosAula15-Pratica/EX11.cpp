#include <stdio.h>

void imprime(const char *string){
	
    while (*string){
        if (*string != ' '){
            printf("%c", *string);
        }
        string++;
    }
}

int main(){
	
    char string[50];
    
    printf("Digite uma string: ");
    fgets(string, 50, stdin);

    imprime(string);

    return 0;
}
