#include <stdio.h> 

void verifica(int X, int Y){
	
	int  n = X;
	int pares = 0, impares = 0;
	
	while (n<=Y){
			
		if(n%2 ==0 ){
				
			pares++;
			
		}
		else{
			
			impares++;	
					
		}
						
		n++;
				
	}
		
		printf("%d Pares\n", pares);
		printf("%d Impares", impares);
	
}
	
int main() {
	
	int X, Y ;
		
	printf("Digite um valor para X: ");
	scanf("%d", &X);
		
	printf("Digite um valor para Y: ");
	scanf("%d", &Y);
		
	verifica(X,Y);
		
	return 0;
	
}
