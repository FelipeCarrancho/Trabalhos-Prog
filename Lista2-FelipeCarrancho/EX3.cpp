#include <stdio.h>

void Multiplos(int n1, int n2, int x){
	
	int i;
	
	if (n1 % x == 0){
		printf("%d ", n1);
	}
	for (i = n1 + 1; i <= n2; i++){
		
		if (i % x == 0){
			
			printf("%d ", i);
		}
	}
}

int main(){
	
	int n1, n2, x;
	
	printf("Digite o valor de n1: ");
	scanf("%d", &n1);
	
	printf("Digite o valor de n2: ");
	scanf("%d", &n2);
	
	printf("Digite o valor de x: ");
	scanf("%d", &x);
	
	printf("Multiplos de %d entre %d e %d sao: ", x, n1, n2);
	
	Multiplos(n1, n2, x);
	
	return 0;
}


