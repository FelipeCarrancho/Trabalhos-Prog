#include <stdio.h>

typedef struct{
    float x;
    float y;
    float z;
} est_Vetor;

est_Vetor somar(est_Vetor vetorA, est_Vetor vetorB){
    est_Vetor soma;
    soma.x = vetorA.x + vetorB.x;
    soma.y = vetorA.y + vetorB.y;
    soma.z = vetorA.z + vetorB.z;
    return soma;
}

void multiplicar(est_Vetor vetorA, est_Vetor vetorB){
	
    float maxCoord = vetorB.x;

    if (vetorB.y > maxCoord){
        maxCoord = vetorB.y;
    }
    if (vetorB.z > maxCoord){
        maxCoord = vetorB.z;
    }

    float axb, ayb, azb;

    axb = vetorA.x * maxCoord;
    ayb = vetorA.y * maxCoord;
    azb = vetorA.z * maxCoord;

    printf("Multiplicacao dos vetores: x = %.2f, y = %.2f, z = %.2f", axb, ayb, azb);
}

int main(){
	
    est_Vetor vetorA, vetorB;

    printf("Digite as coordenadas do vetor A (x y z): ");
    scanf("%f %f %f", &vetorA.x, &vetorA.y, &vetorA.z);

    printf("Digite as coordenadas do vetor B (x y z): ");
    scanf("%f %f %f", &vetorB.x, &vetorB.y, &vetorB.z);

    est_Vetor soma = somar(vetorA, vetorB);
    printf("A soma dos vetores e: (%.2f, %.2f, %.2f)\n", soma.x, soma.y, soma.z);
    multiplicar(vetorA, vetorB);

    return 0;
}
