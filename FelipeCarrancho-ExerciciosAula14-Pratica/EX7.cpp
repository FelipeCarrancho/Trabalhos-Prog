#include <stdio.h>
#define MAX 10

void lematriz(float matriz[MAX][MAX], int linhas, int colunas){
	
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%.2f", &matriz[i][j]);
        }
    }
}

void copiazera(float matrizA[MAX][MAX], float matrizB[MAX][MAX], int linhas, int colunas){
	
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matrizB[i][j] = matrizA[i][j];
        }
    }
}

void imprimematriz(float matriz[MAX][MAX], int linhas, int colunas){
	
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%.2f ", matriz[i][j]);
        }
    }
}

int main(){
	
    float a[MAX][MAX], b[MAX][MAX];
    
    int m, n;
    
    printf("Digite o numero de linhas e colunas das matrizes: ");
    scanf("%d %d", &m, &n);

    printf("\nForneca os elementos da matriz a:\n");
    lematriz(a, m, n);

    printf("\nForneca os elementos da matriz b:\n");
    lematriz(b, m, n);

    copiazera(a, b, m, n);

    printf("\nMatriz a:\n");
    imprimematriz(a, m, n);

    printf("\nMatriz b:\n");
    imprimematriz(b, m, n);

    return 0;
}
