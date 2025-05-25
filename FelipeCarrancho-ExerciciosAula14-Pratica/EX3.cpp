#include <stdio.h>

int main(){
	
    float matriz[4][2];

    for (int i = 0; i<4; i++){
        for (int j = 0; j < 2; j++){
            printf("Digite o valor para a posicao das matrizes [%d][%d]: ", i+1, j+1);
            scanf("%f", &matriz[i][j]);
        }
    }

    for (int i = 0; i<4; i++){
        for (int j = 0; j<2; j++){
            printf("%8.2f ", matriz[i][j]);
        }
    }

    return 0;
}
