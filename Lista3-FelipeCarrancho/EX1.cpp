#include <stdio.h>

void calcularMedia(float matriz[4][4]){
	
    for (int linha = 0; linha < 4; linha++){
        float soma = 0.0;
        for (int coluna = 0; coluna < 4; coluna++){
            soma += matriz[linha][coluna];
        }
        
        float media = soma / 4.0;
        matriz[linha][linha] = media;

        for (int coluna = 0; coluna < 4; coluna++) {
            printf("%.2f\t", matriz[linha][coluna]);
        }
    }
}

void somaComElaMesma(float matriz[4][4]){
	
    for (int linha = 0; linha < 4; linha++){
        for (int coluna = 0; coluna < 4; coluna++){
            printf("%8.2f", matriz[linha][coluna] + matriz[linha][coluna]);
        }
    }
}

void diagonalPrincipal(float matriz[4][4]){
	
    for (int linha = 0; linha < 4; linha++){
        for (int coluna = 0; coluna < 4; coluna++){
            if (linha == coluna) {
                printf("%8.2f", matriz[linha][coluna]);
            }
            else{
                printf("%8.2f", 0.0);
            }
        }
    }
}

void transposta(float matriz[4][4]){
	
    for (int linha = 0; linha < 4; linha++){
        for (int coluna = 0; coluna < 4; coluna++){
            printf("%8.2f", matriz[coluna][linha]);
        }
    }
}

int main(){
	
    float matriz[4][4];

    for (int linha = 0; linha < 4; linha++){
        for (int coluna = 0; coluna < 4; coluna++){
            printf("Digite o elemento [%d][%d] da matriz: ", linha, coluna);
            scanf("%f", &matriz[linha][coluna]);
        }
    }

    printf("\nA primeira matriz eh:\n");

    for (int linha = 0; linha < 4; linha++){
        for (int coluna = 0; coluna < 4; coluna++){
            printf("%8.2f", matriz[linha][coluna]);
        }
    }

    printf("\nA matriz transposta eh:\n");
    transposta(matriz);

    printf("\nA matriz com apenas a diagonal principal da matriz eh:\n");
    diagonalPrincipal(matriz);

    printf("\nA soma da matriz com ela mesma eh:\n");
    somaComElaMesma(matriz);

    printf("\nMatriz com Media na Diagonal Principal:\n");
    calcularMedia(matriz);

    return 0;
}
