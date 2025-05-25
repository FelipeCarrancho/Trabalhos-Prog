#include <stdio.h>

void impares(int n ){
	
	int i = 1 ;
	
	while (i <=n){
		
		if(i%2 != 0){
			
			printf("%d ", i);
		}
		
		i++;
		
	}	

}

int main(){
	
	int n;

	printf("Digite um valor inteiro : ");
	scanf("%d", &n);
	
	impares(n);
	
	return 0;

}
