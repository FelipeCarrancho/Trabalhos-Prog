#include <stdio.h>

void modifica(char *string){
	
    int i = 0;

    while (string[i] != '\0'){
        if (i == 0 || string[i - 1] == ' '){
            if (string[i] >= 'a' && string[i] <= 'z'){
                string[i] = string[i] - 'a' + 'A';
            }
        }
        i++;
    }
}

int main(){
	
    char string[50];

    printf("Digite uma string (com mais de uma palavra): ");
    fgets(string, 50, stdin);

    modifica(string);

    printf("Corrigindo: %s\n", string);

    return 0;
}
