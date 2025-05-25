#include <stdio.h>

float fatorial(int n){
	
	int valor = n;
	
	for(int i=1; i<n ; i++){
		
		valor=(valor*(n-i));
	}
	return valor;
}

int main (){
	
	int n, fato;
	
	printf("Digite um valor desejado para fatorar: ");
	scanf("%d",&n);
	
	fato = fatorial(n);
	
	printf("O valor do fatorial de %d = %d",n,fato);
	
	return 0;
}
