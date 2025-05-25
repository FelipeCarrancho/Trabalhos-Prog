#include <stdio.h>

int verifica(const char* string){
	
    int comprimento = 0;
    
    while (string[comprimento] != '\0'){
        comprimento++;
    }
    
    int i = 0;
    int j = comprimento - 1;
    
    while (i < j){
        if (string[i] != string[j]){
            return 0;
        }
        i++;
        j--;
    }
    
    return 1;
}

int main(){
	
    char string[100];
    int comprimento = 0;
    
    printf("Digite uma string: ");
    fgets(string, 100, stdin);
    
    while (string[comprimento] != '\0'){
        comprimento++;
    }
    
    if (string[comprimento - 1] == '\n'){
        string[comprimento - 1] = '\0';
    }
    
    if (verifica(string)){
        printf("A string eh um palindromo.\n");
    } else {
        printf("A string nao eh um palindromo.\n");
    }
    
    return 0;
}
