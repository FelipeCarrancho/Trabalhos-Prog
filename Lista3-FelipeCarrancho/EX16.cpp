#include <stdio.h>
#include <string.h>

void contabilizarVotos(int numAlunos){
	
    char candidatos[4][20] = {"Ana", "Ari", "Eva", "Ivan"};
    int votos[4] = {0};

    for (int i = 0; i < numAlunos; i++){
    	
        char nome[20];
        int votoValido = 0;

        printf("Digite o nome do candidato escolhido pelo aluno %d: ", i + 1);
        scanf("%s", nome);

        for (int j = 0; j < 4; j++){
            if (strcmp(nome, candidatos[j]) == 0){
                votos[j]++;
                votoValido = 1;
                break;
            }
        }

        if (!votoValido){
            printf("Voto Nulo\n");
        }
    }

    printf("\nResultado da eleicao:\n");
    for (int i = 0; i < 4; i++){
        printf("Candidato %s: %d votos\n", candidatos[i], votos[i]);
    }
}

int main(){
	
    int numAlunos;

    printf("Digite o numero de alunos presentes na eleicao: ");
    scanf("%d", &numAlunos);

    printf("Candidatos a Eleicao:\n1- Ana\n2- Ari\n3- Eva\n4- Ivan\n\n");
    contabilizarVotos(numAlunos);

    return 0;
}
