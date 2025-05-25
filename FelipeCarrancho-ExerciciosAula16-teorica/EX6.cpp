#include <stdio.h>

typedef struct{
    int x;
    int y;
} ponto;

int calculo(ponto p){
	
    return p.x * p.x + p.y * p.y;
}

ponto pontoProximoOrigem(ponto p1, ponto p2){
	
    int distancia1 = calculo(p1);
    int distancia2 = calculo(p2);

    if (distancia1 < distancia2){
        return p1;
    } else {
        return p2;
    }
}

int main(){
	
    ponto ponto1, ponto2, ponto3, ponto4;
    
    printf("Digite as coordenadas do 1 ponto (x y): ");
    scanf("%d %d", &ponto1.x, &ponto1.y);

    printf("Digite as coordenadas do 2 ponto (x y): ");
    scanf("%d %d", &ponto2.x, &ponto2.y);

    printf("Digite as coordenadas do 3 ponto (x y): ");
    scanf("%d %d", &ponto3.x, &ponto3.y);

    printf("Digite as coordenadas do 4 ponto (x y): ");
    scanf("%d %d", &ponto4.x, &ponto4.y);

    ponto pontoProx = pontoProximoOrigem(pontoProximoOrigem(ponto1, ponto2), pontoProximoOrigem(ponto3, ponto4));

    printf("As coordenadas do ponto mais proximo da origem sao: (%d, %d)\n", pontoProx.x, pontoProx.y);

    return 0;
}
