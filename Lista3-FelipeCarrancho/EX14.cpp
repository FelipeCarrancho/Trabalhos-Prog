#include <stdio.h>

void soletra(char string[100]){
	
    int i = 0;
    
    for (i = 0; string[i] != '\0'; i++){
        if (string[i] != ' '){
            printf("%c-", string[i]);
        }
    }
}

int main(){
	
    char string[100];
    
    printf("Digite uma string:");
    fgets(string, 100, stdin);
    
   soletra(string);

    return 0;
}
