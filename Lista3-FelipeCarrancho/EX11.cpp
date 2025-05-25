#include <stdio.h>

int conta(char* string){
	
    int contador = 0;
    
    for (int i = 0; string[i] != '\0'; i++){
        if (string[i] == ' '){
            contador++;
        }
    }
    
    return contador;
}

int main(){
	
    char string[100];
    
    printf("Digite uma string: ");
    fgets(string,100,stdin);
    
    int numeroEspacos = conta(string);
    
    printf("Numero de espacos em branco e: %d\n", numeroEspacos);
    
    return 0;
}
