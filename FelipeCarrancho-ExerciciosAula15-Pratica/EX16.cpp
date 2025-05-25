#include <stdio.h>

void cripto(char* string, int k){
	
    int i = 0;
    
    while (string[i] != '\0'){
        if (string[i] >= 'a' && string[i] <= 'z'){
            string[i] = (((string[i] - 'a') + k) % 26) + 'a';
        } else if (string[i] >= 'A' && string[i] <= 'Z'){
            string[i] = (((string[i] - 'A') + k) % 26) + 'A';
        }
        
        i++;
    }
}

int main(){
	
    char string[50];
    int k;
    
    printf("Mensagem para criptografar: ");
    fgets(string, 50, stdin);
    
    printf("Digite o valor de K: ");
    scanf("%d", &k);
    
    cripto(string, k);
    
    printf("Mensagem criptografada: %s\n", string);
    
    return 0;
}
