#include <stdio.h>

#define tamanho 10

void gerarMatriz(float vetor1[tamanho], float vetor2[tamanho], float vetor3[tamanho], float matriz[tamanho][3]){
	
    for (int i = 0; i<tamanho; i++){
        matriz[i][0] = vetor1[i];
        matriz[i][1] = vetor2[i];
        matriz[i][2] = vetor3[i];
    }
}

int main(){
    float vetor1[tamanho], vetor2[tamanho], vetor3[tamanho];

    printf("Digite os elementos do primeiro vetor:\n");
    for (int i = 0; i<tamanho; i++){
        scanf("%f", &vetor1[i]);
    }

    printf("Digite os elementos do segundo vetor:\n");
    for (int i = 0; i<tamanho; i++){
        scanf("%f", &vetor2[i]);
    }

    printf("Digite os elementos do terceiro vetor:\n");
    for (int i = 0; i<tamanho; i++){
        scanf("%f", &vetor3[i]);
    }

    float matriz[tamanho][3];
    gerarMatriz(vetor1, vetor2, vetor3, matriz);

    for (int i = 0; i<tamanho; i++){
        for (int j = 0; j<3; j++){
            printf("%.2f ", matriz[i][j]);
        }
    }

    return 0;
}
