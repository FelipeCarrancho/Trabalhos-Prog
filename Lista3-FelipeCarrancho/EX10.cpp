#include <stdio.h>

int encontrarChar(char string[], char caractere){
	
    int vezes = 0;
    int ultima = -1;
    int i;
    
    for (i = 0; string[i] != '\0'; i++){
    	
        if (string[i] == caractere){
            ultima = i;
        }
    }
    return ultima;
}

int main(){
	
    char string[100];
    char caractere;
    
    printf("Digite uma string:\n");
    fgets(string, 100, stdin);
    fflush(stdin);
    
    printf("Digite um caractere: ");
    scanf(" %c", &caractere);

    int posicao = encontrarChar(string, caractere);

    printf("A última vez que o caracter %c aparece por último na posição %d da string %s", caractere, posicao, string);

    return 0;
}
