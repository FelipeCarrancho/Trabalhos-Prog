#include <stdio.h>

void nota(int n1){
	
	if (n1 >= 0 && n1 < 70){
		printf("Reprovado!");
	}
	else if(n1 >= 70 && n1 <= 100){
		printf("Aprovado!");
		}
	    else{
	     	printf("Nota Invalida");
	     }
	     return;
}

int main(){
	int n;
	
	printf("Digite a nota do Aluno: ");
	scanf("%d", &n);
	
	nota(n);
	
	return 0;
}
