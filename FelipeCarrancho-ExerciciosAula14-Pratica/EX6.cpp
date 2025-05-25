#include <stdio.h>
#define maximo 100

void calcularDiagonais(float matriz[maximo][maximo], int N){
	
    float soma_principal = 0;
    float soma_secundaria = 0;

    for (int i = 0; i<N; i++){
        soma_principal += matriz[i][i];
        soma_secundaria += matriz[i][N - 1 - i];
    }

    printf("Soma da matriz principal: %.2f", soma_principal);
    printf("\nSoma da matriz secundaria: %.2f", soma_secundaria);
}

int main(){
	
    int N;
    float matriz[maximo][maximo];

    printf("Digite a matriz quadrada (N): ");
    scanf("%d", &N);

    printf("\nDigite os elementos da matriz:");
    for (int i = 0; i<N; i++){
        for (int j = 0; j<N; j++){
            scanf("%f", &matriz[i][j]);
        }
    }

    calcularDiagonais(matriz, N);

    return 0;
}
