#include <stdio.h>

typedef struct{
    int matriz1[4][4];
    int matriz2[4][4];
    int matriz3[4][4];
    int vetor1[16];
    int vetor2[16];
} Matrizes;

void transposta(Matrizes matrizes){
	
    int i, j;
    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            matrizes.matriz2[i][j] = matrizes.matriz1[j][i];
        }
    }

    printf("\nMatriz transposta:\n");
    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            printf("%d", matrizes.matriz2[i][j]);
        }
    }
}

void multiplicacao(Matrizes matrizes){
	
    int i, j;
    int maior = 0;
    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            if (matrizes.matriz1[i][j] > maior){
                maior = matrizes.matriz1[i][j];
            }
        }
    }

    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            matrizes.matriz3[i][j] = maior * matrizes.matriz1[i][j];
        }
    }

    printf("\nMatriz multiplicada pelo maior valor:\n");
    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            printf("%5d", matrizes.matriz3[i][j]);
        }
    }
}

void vetorMatriz(Matrizes matrizes){
	
    int i, j;
    int k = 0;
    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            matrizes.vetor1[k] = matrizes.matriz1[i][j];
            k++;
        }
    }

    printf("\nVetor matriz:\n");
    for (i = 0; i < 16; i++){
        printf("%d ", matrizes.vetor1[i]);
    }
}

void vetorMultiplicacao(Matrizes matrizes){
	
    int i, j;
    int k = 0;
    int produto;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            matrizes.vetor2[k] = matrizes.matriz1[i][j] * matrizes.matriz2[i][j];
            k++;
        }
    }

    printf("\nVetor multiplicacao de matrizes:\n");
    for (i = 0; i < 16; i++) {
        printf("%d ", matrizes.vetor2[i]);
    }
}

int main(){
	
    int i, j;
    Matrizes matrizes;

    printf("Digite os elementos da primeira matriz:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Elemento[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrizes.matriz1[i][j]);
        }
    }

    printf("\nMatriz principal:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d", matrizes.matriz1[i][j]);
        }
    }

    transposta(matrizes);
    multiplicacao(matrizes);
    vetorMatriz(matrizes);
    vetorMultiplicacao(matrizes);

    return 0;
}
