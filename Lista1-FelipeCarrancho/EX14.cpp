#include <stdio.h>

float tabela(float tempo){
	
	if(tempo >= 5){
		return 0.95;
	}
	else if((tempo < 5) && (tempo >= 4)){
		return 0.9;
		}
	    else if((tempo < 4) && (tempo >=3 )){
			return 0.85;
		}
	    else if((tempo < 3) && (tempo >= 2)){
			return 0.75;
		}
     	else if((tempo < 2) && (tempo >=1)){
			return 0.65;
		}
     	else{
	        return 0.55;
	    }
}

int main(){
	
	float tempo, taxa;
	
	printf("Digite o tempo em que os fundos foram mantidos em deposito: ");
	scanf("%f", &tempo);
	
	taxa = tabela(tempo);
	
	printf("A taxa de juros e: %.2f", taxa);
	
	return 0;
}
