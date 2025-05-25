#include <stdio.h>

int main(){
	
    int ordem, i, j;
    printf("Digite a ordem da matriz:\n");
    scanf("%d", &ordem);
    
    int matriz[ordem][ordem];

    for (i = 0; i < ordem; i++){
        for (j = 0; j < ordem; j++){
            printf("Digite o valor do elemento[%d][%d]:", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < ordem; i++){
        for (j = 0; j < ordem; j++){
            printf("%d", matriz[i][j]);
        }
    }

    int somaEsperada = 0;
    for (j = 0; j < ordem; j++){
        somaEsperada += matriz[0][j];
    }

    for (i = 0; i < ordem; i++){
        int somaLinhas = 0;
        for (j = 0; j < ordem; j++){
            somaLinhas += matriz[i][j];
        }
        if (somaLinhas != somaEsperada){
            printf("Nao e quadrado magico.\n");
            return 0;
        }
    }

    for (j = 0; j < ordem; j++){
        int somaColunas = 0;
        for (i = 0; i < ordem; i++){
            somaColunas += matriz[i][j];
        }
        if (somaColunas != somaEsperada){
            printf("Nao e quadrado magico.\n");
            return 0;
        }
    }

    int somaDiagonalPrincipal = 0;
    for (i = 0; i < ordem; i++){
        somaDiagonalPrincipal += matriz[i][i];
    }
    if (somaDiagonalPrincipal != somaEsperada){
        printf("Nao e quadrado magico.\n");
        return 0;
    }

    int diagonalSecundaria = 0;
    for (i = 0; i < ordem; i++){
        diagonalSecundaria += matriz[i][ordem - i - 1];
    }
    if (diagonalSecundaria != somaEsperada){
        printf("Nao e um quadrado magico.\n");
        return 0;
    }

    printf("E um quadrado magico.\n");

    return 0;
}
