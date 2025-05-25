#include <stdio.h>

int calculo(const char *string){
	
    int vogal = 0;
    int i;

    for (i = 0; string[i] != '\0'; i++){
        if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u' || string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' ||string[i] == 'U'){
            vogal++;
        }
    }

    return vogal;
}

int main(){
	
    char string[50];
    int num;

    printf("Digite uma string: ");
    fgets(string, 50, stdin);

    num = calculo(string);

    printf("Numero de vogais: %d\n", num);

    return 0;
}
