#include <stdio.h>
#include <math.h>

float mediaAritmetica(float n1, float n2, float n3){
    return (n1+n2+n3)/3;
}

int main(){
	
    float n1, n2, n3, mediaA;
    
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);
    
    mediaA = mediaAritmetica(n1, n2, n3);
    
    printf("A media e %.2f", mediaA);

    return 0;
}

