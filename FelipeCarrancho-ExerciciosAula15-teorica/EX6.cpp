#include <stdio.h>

int calculo(const char *string){
	
    int count = 0;

    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] == ' ') {
            count++;
        }
    }

    return count;
}

int main(){
	
    char string[50];
    int num;

    printf("Digite uma string: ");
    fgets(string, 50, stdin);

    num = calculo(string);

    printf("Essa string tem %d espacos em branco\n", num);

    return 0;
}
