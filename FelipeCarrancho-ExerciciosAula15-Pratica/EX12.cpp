#include <stdio.h>

int vogal(char c){
	
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
        return 1;
    } else {
        return 0;
    }
}

void caracteres(const char* string){
	
    int vogais = 0;
    int consoantes = 0;
    int outros = 0;
    int carac = 0;
    
    while (string[carac] != '\0'){
        carac++;
    }

    for (int i = 0; i < carac; i++){
    	
        char c = string[i];
        
        if (vogal(c)){
        	
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
                vogais++;
            } else {
                consoantes++;
            }
        } else {
            outros++;
        }
    }
    
    printf("Quantidade de vogais: %d\n", vogais);
    printf("Quantidade de Consoantes: %d\n", consoantes);
    printf("Quantidade de Outros: %d\n", outros);
}

int main(){
	
    char string[50];
    
    printf("Digite uma string:");
    fgets(string, 50, stdin);
    
    printf("\nEstatísticas dos caracteres digitados:\n");
    caracteres(string);
    
    return 0;
}
