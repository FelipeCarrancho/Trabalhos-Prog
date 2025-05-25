#include <stdio.h>

typedef struct {
    char nome[50];
    char tipoComida[50];
    float nota;
} Restaurante;

int main(){
	
    int numRestaurantes;
    
    printf("Digite o numero de restaurantes: ");
    scanf("%d", &numRestaurantes);

    Restaurante restaurantes[numRestaurantes];

    for (int i = 0; i < numRestaurantes; i++){
    	
        printf("\nRestaurante %d\n", i + 1);
        printf("Nome: ");
        scanf("%s", restaurantes[i].nome);
        printf("Tipo de comida: ");
        scanf("%s", restaurantes[i].tipoComida);
        printf("Nota: ");
        scanf("%f", &restaurantes[i].nota);
    }

    printf("\nLista de restaurantes:\n");
    
    for (int i = 0; i < numRestaurantes; i++){
        printf("Restaurante %d\n", i + 1);
        printf("Nome: %s\n", restaurantes[i].nome);
        printf("Tipo de comida: %s\n", restaurantes[i].tipoComida);
        printf("Nota: %.2f\n", restaurantes[i].nota);
    }

    float maiorNota = restaurantes[0].nota;
    int indiceMaiorNota = 0;

    for (int i = 1; i < numRestaurantes; i++){
        if (restaurantes[i].nota > maiorNota){
            maiorNota = restaurantes[i].nota;
            indiceMaiorNota = i;
        }
    }

    printf("\nO tipo de cozinha do restaurante com a maior nota : %s\n", restaurantes[indiceMaiorNota].tipoComida);

    return 0;
}
