#include <stdio.h>
#include <stdlib.h>

float media(float p1, float p2){
    return 10-((p1+p2)/2);
}

int main(){
	
    float p1, p2;
    
    printf("Calculo de quanto tirar na p3\n");
    printf("Nota na 1a prova: ");
    scanf("%f", &p1);
    printf("Nota na 2a prova: ");
    scanf("%f", &p2);
    
    printf("Nota necessaria: %.2f", media(p1,p2));
    
    return 0;
}
