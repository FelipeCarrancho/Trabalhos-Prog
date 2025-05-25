#include <stdio.h>

int modifica(char *string){
 
    int count = 0;

    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] == 'a') {
            string[i] = 'b';
            count++;
        }
    }
    printf("String modificada: %s", string);
    return count;
}

int main(){
	
    char string[50];
    int num;

    printf("Digite uma string: ");
    fgets(string, 50, stdin);

    num = modifica(string);

    printf("Foram modificadas %d caracteres \n", num);

    return 0;
}
