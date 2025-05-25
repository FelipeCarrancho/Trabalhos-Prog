#include <stdio.h>

int main(){
	
    char string[50];
    int vogal = 0;
    int i;

    printf("Digite uma string: ");
    fgets(string, 50, stdin);

    for (i = 0; string[i] != '\0'; i++) {
        if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u' || string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' ||string[i] == 'U'){
            vogal++;
        }
    }

    printf("Numero de vogais: %d\n", vogal);

    return 0;
}
