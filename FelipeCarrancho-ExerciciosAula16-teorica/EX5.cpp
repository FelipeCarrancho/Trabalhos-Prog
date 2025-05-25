#include <stdio.h>

typedef struct{
    int x;
    int y;
} ponto;

int calculo(ponto p1, ponto p2){
	
    int deltaX = p2.x - p1.x;
    int deltaY = p2.y - p1.y;
    int distancia = deltaX * deltaX + deltaY * deltaY;
    
    return distancia;
}

int main(){
	
    ponto ponto1, ponto2;
    int distancia;
    
    printf("Digite as coordenadas do primeiro ponto (x y):\n ");
    scanf("%d %d", &ponto1.x, &ponto1.y);

    printf("Digite as coordenadas do segundo ponto (x y):\n ");
    scanf("%d %d", &ponto2.x, &ponto2.y);

    distancia = calculo(ponto1, ponto2);

    printf("A distancia entre eles e: %d\n", distancia);

    return 0;
}
