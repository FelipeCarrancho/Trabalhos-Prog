#include <stdio.h>

int conta(const char* string, char caractere){
	
    int count = 0;
    
    for (int i = 0; string[i] != '\0'; i++){
        if (string[i] == caractere){
            count++;
        }
    }
    
    return count;
}

int main(){
	
    char string[100];
    char caractere;
    
    printf("Digite uma string: ");
    scanf("%99s", string);
    
    printf("Digite um caractere: ");
    scanf(" %c", &caractere);
    
    int aparece = conta(string, caractere);
    
    printf("O caractere %c aparece %d vezes na string.\n", caractere, aparece);
    
    return 0;
}
