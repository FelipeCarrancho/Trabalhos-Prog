#include <stdio.h>
#include <math.h>

int main(){
	
	int x, i;
	float pot;
	
	printf("Digite um numero inteiro positivo:");
	scanf ("%d", &x);
	
	for ( i = 0; i <= x; i++){
		
		pot = pow(i,2);
		printf("\n%d elevado a 2 e: %.2f" ,i , pot);
		
		}
		return 0;
}
