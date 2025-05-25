#include <stdio.h>

typedef struct {
    float x;
    float y;
    float z;
} Vetor;

Vetor somav(Vetor v1, Vetor v2) {
    Vetor res;
    res.x = v1.x + v2.x;
    res.y = v1.y + v2.y;
    res.z = v1.z + v2.z;
    return res;
}

Vetor subv(Vetor v1, Vetor v2) {
    Vetor res;
    res.x = v1.x - v2.x;
    res.y = v1.y - v2.y;
    res.z = v1.z - v2.z;
    return res;
}

Vetor prodv(Vetor v1, Vetor v2) {
    Vetor res;
    res.x = v1.y * v2.z - v1.z * v2.y;
    res.y = v1.z * v2.x - v1.x * v2.z;
    res.z = v1.x * v2.y - v1.y * v2.x;
    return res;
}

int main() {
    Vetor v1, v2;

    printf("Digite as coordenadas do vetor 1 para x, y e z: ");
    scanf("%f %f %f", &v1.x, &v1.y, &v1.z);

    printf("Digite as coordenadas do vetor 2 para x, y e z: ");
    scanf("%f %f %f", &v2.x, &v2.y, &v2.z);

    Vetor soma = somav(v1, v2);
    Vetor subtracao = subv(v1, v2);
    Vetor produto = prodv(v1, v2);

    printf("\nSoma dos vetores: %.2f %.2f %.2f\n", soma.x, soma.y, soma.z);
    printf("Subtracao dos vetores: %.2f %.2f %.2f\n", subtracao.x, subtracao.y, subtracao.z);
    printf("Produto vetorial dos vetores: %.2f %.2f %.2f\n", produto.x, produto.y, produto.z);

    return 0;
}
