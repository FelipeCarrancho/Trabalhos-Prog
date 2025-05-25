#include <stdio.h>

void calcIdade(int idade){
	
	if(idade >=0 && idade <= 3){
		printf("\nBebe");
	}
	else if(idade >= 4 && idade <= 10){
			printf("\nCrianca");
		}
	    else if(idade >= 11 && idade<=18){
			printf("\nAdolescente");
		}
     	else if(idade >= 19 && idade <= 50){
			printf("\nAdulto");
		}
		else if(idade >= 51){
	    	("\nIdoso");
	    }
	
	return; 
}

int main(){
	
	int anoAtual, anoNasc, idade;
	
	printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);
    
	printf("Digite o ano de nascimento: ");
	scanf("%d", &anoNasc);
	
	idade = anoAtual - anoNasc;
	
	printf("A pessoa tem %d anos", idade);
	
	calcIdade(idade);
	
	
	return 0;
}
