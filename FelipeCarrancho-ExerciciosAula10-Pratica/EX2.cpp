#include <stdio.h>

void verificaFalta(int alunos){
	
	int n = 1, falta, a = 0;
	float nota;
	
	while (n <= alunos){
		
		printf("Digite a nota do aluno %d:  ", n);
		scanf("%f",&nota);
		
		printf("Agora digite o numero de faltas: ");
		scanf("%d", &falta);
		
		if((nota > 7) && (falta <=5)){
			a++;
		}

		n++;
	}
	
	printf("Somente %d alunos tiveram nota maior que 7 e menos de 5 faltas", a++);

}

int main(){
	
	int alunos ;

	printf("Digite a quantidade de alunos da sua turma: ");
	scanf("%d",&alunos);
	
	verificaFalta (alunos);
	
	return 0;	

}

