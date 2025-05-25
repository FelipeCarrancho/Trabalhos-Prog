#include <stdio.h>

void funcao(const char* string, char* vogais, char* consoantes){
	
	int vogal = 0;
	int consoante = 0;
	int i = 0;
	
	while (string[i] != '\0'){
		
		char c = string[i];
		
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
			if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
				vogais[vogal++] = c;
			} else {
				consoantes[consoante++] = c;
			}
		}
		i++;
	}
}

int main(){
	
	char string[50];
	char vogais[50];
	char consoantes[50];
	
	printf("Digite uma string: ");
	fgets(string, 50, stdin);
	
	funcao(string, vogais, consoantes);
	
	printf("Vogais na String: %s\n", vogais);
	printf("Consoantes na String: %s\n", consoantes);
	
	return 0;
}


