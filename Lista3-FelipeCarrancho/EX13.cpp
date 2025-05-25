#include <stdio.h>

void remover(char string[100], char caractere){
	
    int i = 0;
    int cont;

    for (i = 0; string[i] != '\0'; i++){
        if (string[i] != caractere){
            printf("%c", string[i]);
        }
    }
}

int main(){
	
    char string[100];
    char caractere;

    printf("Digite uma string:\n");
    fgets(string, 100, stdin);
    
    printf("Digite um caractere:\n");
    scanf("%c", &caractere);
    
    for (int i = 0; string[i] != '\0'; i++){
        if (string[i] == '\n') {
            string[i] = '\0';
            break;
        }
    }

    remover(string, caractere);

    return 0;
}
