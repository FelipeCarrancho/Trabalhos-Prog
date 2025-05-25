#include <stdio.h>

float calculo(int alunos){
	
	int i;
	float nota;
	float somaNotas = 0;
	
	for (i = 1; i <= alunos; i++){
		
		printf("Digite a nota do aluno %d: ", i);
		scanf("%f", &nota);
		
		somaNotas += nota;
	}
		
	float media = somaNotas / alunos;
	
	return media;
}

int main(){
	
	int alunos;
	float notas;
	
	printf("Digite quantos alunos tem na sala? ");
	scanf("%d", &alunos);
	
	notas = calculo(alunos);
	
	printf("A media das notas e: %.2f", notas);
	
	return 0;
}


