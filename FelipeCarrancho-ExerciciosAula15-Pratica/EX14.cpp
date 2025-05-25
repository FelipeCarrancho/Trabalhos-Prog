#include <stdio.h>

int calculo(char* string){
	
    int comprimento = 0;
    
    while (string[comprimento] != '\0'){
        comprimento++;
    }
    return comprimento;
}

int espaco(char* string, char c){
	
    int trocas = 0;
    int comprimento = calculo(string);
    
    for (int i = 0; i < comprimento; i++){
        if (string[i] == c){
            string[i] = ' ';
            trocas++;
        }
    }
    
    return trocas;
}

int main(){
	
	int troca;
    char string[20];
    char carac;
    
    printf("Digite uma string: ");
    fgets(string, 20, stdin);
    
    printf("Digite um caractere: ");
    scanf(" %c", &carac);
    
    troca = espaco(string, carac);
    
    printf("String nova: %s\n", string);
    printf("Numero de trocas feitas: %d\n", troca);
    
    return 0;
}
