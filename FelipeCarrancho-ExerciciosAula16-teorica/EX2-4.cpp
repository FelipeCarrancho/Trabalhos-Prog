#include <stdio.h>

typedef struct{
    float peso;
    float altura;
} medidas;

typedef struct{
    char nome[50];
    medidas medidasAtleta;
    char esporte[50];
    int idade;
} atleta;

int main(){
    atleta atleta1;

    printf("Digite o nome do atleta: ");
    scanf("%s", atleta1.nome);

    printf("Digite o peso do atleta (em kg): ");
    scanf("%f", &atleta1.medidasAtleta.peso);

    printf("Digite a altura do atleta (em metros): ");
    scanf("%f", &atleta1.medidasAtleta.altura);

    printf("Digite o esporte praticado pelo atleta: ");
    scanf("%s", atleta1.esporte);

    printf("Digite a idade do atleta: ");
    scanf("%d", &atleta1.idade);

    printf("\nAtleta:\n");
    printf("Nome: %s\n", atleta1.nome);
    printf("Peso: %.2f kg\n", atleta1.medidasAtleta.peso);
    printf("Altura: %.2f metros\n", atleta1.medidasAtleta.altura);
    printf("Esporte: %s\n", atleta1.esporte);
    printf("Idade: %d anos\n", atleta1.idade);

    return 0;
}
