#include <stdio.h>	

float media(int n){
	
	int i;
	float soma, med, num;
	soma = 0;
	
	for(i=1; i<=n; i++){
		
		printf("Digite um valor: ");
		scanf("%f",&num);
		
		soma=soma+num;
	}
		med = (soma/n);
	return med;
}

int main (){
	
	int n;
	float medias;
	
	printf("Digite a quantidade de valores a ser feita a media: ");
	scanf("%d",&n);
	
	medias=media(n);
	
	printf("Media dos valores = %.2f", medias);
	
	return 0;
}
