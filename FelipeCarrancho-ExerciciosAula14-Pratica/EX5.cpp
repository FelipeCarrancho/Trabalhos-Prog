#include <stdio.h>

int main(){
	
    int N, M;
    
    printf("Digite o numero de linhas (N): ");
    scanf("%d", &N);
    
    printf("Digite o numero de colunas (M): ");
    scanf("%d", &M);

    int matriz[N][M];
    int i, j;

    printf("Digite os valores da matriz:\n");

    for (i = 0; i<N; i++){
        for (j = 0; j<M; j++){
            printf("Digite o valor para a posicao da matriz [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i<N; i++){
        for (j = 0; j<M; j++){
            printf("%5d ", matriz[i][j]);
        }
    }

    
    printf("\nSoma dos valores de cada linha:");
    for (i = 0; i<N; i++){
        int somaLinha = 0;
        for (j = 0; j<M; j++){
            somaLinha += matriz[i][j];
        }
        printf("\nLinha %d: %d", i + 1, somaLinha);
    }

    printf("\nMedia dos valores de cada coluna:");
    for (j = 0; j<M; j++){
        float somaColuna = 0;
        for (i = 0; i < N; i++){
            somaColuna += matriz[i][j];
        }
        float mediaColuna = somaColuna / N;
        printf("\nColuna %d: %.2f", j + 1, mediaColuna);
    }

    return 0;
}
