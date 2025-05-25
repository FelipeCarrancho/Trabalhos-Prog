#include <stdio.h>

typedef struct{
    int matricula;
    char nome[50];
    float notas[3];
    float media;
} Aluno;

void DadosAlunos(Aluno alunos[]){
	
    for (int i = 0; i < 5; i++){
        printf("Aluno %d:\n", i+1);
        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);
        printf("Nome: ");
        scanf(" %[^\n]", alunos[i].nome);
        for (int j = 0; j < 3; j++) {
            printf("Nota %d: ", j+1);
            scanf("%f", &alunos[i].notas[j]);
        }
    }
}

void AlunoMaiorNotaP1(Aluno alunos[]){
	
    int indiceMaiorNota = 0;
    float maiorNota = alunos[0].notas[0];
    
    for (int i = 1; i < 5; i++){
        if (alunos[i].notas[0] > maiorNota){
            indiceMaiorNota = i;
            maiorNota = alunos[i].notas[0];
        }
    }
    
    printf("Aluno com maior nota na primeira prova:\n");
    printf("Matricula: %d\n", alunos[indiceMaiorNota].matricula);
    printf("Nome: %s\n", alunos[indiceMaiorNota].nome);
    printf("Nota: %.2f\n\n", alunos[indiceMaiorNota].notas[0]);
}

void AlunoMaiorMediaGeral(Aluno alunos[]){
    int indiceMaiorMedia = 0;
    float maiorMedia = alunos[0].media;
    
    for (int i = 1; i < 5; i++){
        if (alunos[i].media > maiorMedia){
            indiceMaiorMedia = i;
            maiorMedia = alunos[i].media;
        }
    }
    
    printf("Aluno com maior media geral:\n");
    printf("Matricula: %d\n", alunos[indiceMaiorMedia].matricula);
    printf("Nome: %s\n", alunos[indiceMaiorMedia].nome);
    printf("Media: %.2f\n\n", alunos[indiceMaiorMedia].media);
}

void AlunoMenorMediaGeral(Aluno alunos[]){
	
    int indiceMenorMedia = 0;
    float menorMedia = alunos[0].media;
    
    for (int i = 1; i < 5; i++) {
        if (alunos[i].media < menorMedia){
            indiceMenorMedia = i;
            menorMedia = alunos[i].media;
        }
    }
    
    printf("Aluno com menor media geral:\n");
    printf("Matricula: %d\n", alunos[indiceMenorMedia].matricula);
    printf("Nome: %s\n", alunos[indiceMenorMedia].nome);
    printf("Media: %.2f\n\n", alunos[indiceMenorMedia].media);
}

void Aprovacao(Aluno alunos[]){
    for (int i = 0; i < 5; i++) {
        if (alunos[i].media >= 60) {
            printf("Aluno %d: %s - Aprovado\n", i+1, alunos[i].nome);
        } else {
            printf("Aluno %d: %s - Reprovado\n", i+1, alunos[i].nome);
        }
    }
}

int main(){
	
    Aluno alunos[5];
    
    DadosAlunos(alunos);
    
    for (int i = 0; i < 5; i++) {
        float somaNotas = 0;
        for (int j = 0; j < 3; j++) {
            somaNotas += alunos[i].notas[j];
        }
        alunos[i].media = somaNotas / 3;
    }
    
    AlunoMaiorNotaP1(alunos);
    AlunoMaiorMediaGeral(alunos);
    AlunoMenorMediaGeral(alunos);
    
    printf("Situacao dos alunos:\n");
    Aprovacao(alunos);
    
    return 0;
}
