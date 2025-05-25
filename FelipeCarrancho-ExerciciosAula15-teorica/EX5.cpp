#include <stdio.h>

int main(){
	
    char string[50];
    int count = 0;

    printf("Digite uma string: ");
    fgets(string, 50, stdin);

    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] == ' ') {
            count++;
        }
    }

    printf("Essa string tem %d espacos em branco\n", count);

    return 0;
}
