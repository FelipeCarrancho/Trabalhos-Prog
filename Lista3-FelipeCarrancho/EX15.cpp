#include <stdio.h>
#include <string.h>

void inverte(char* string){
	
    int tamanho = strlen(string);

    for (int i = 0, j = tamanho - 1; i < j; i++, j--) {
        char temp = string[i];
        string[i] = string[j];
        string[j] = temp;
    }
}

int main(){
	
    char string[51];

    printf("Digite uma string (no maximo 50 caracteres): ");
    scanf("%50s", string);

    inverte(string);

    printf("String invertida: %s\n", string);

    return 0;
}
