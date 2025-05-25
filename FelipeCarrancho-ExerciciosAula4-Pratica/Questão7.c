#include <stdio.h>
#include <math.h>

int diferenca(int n1, int n2){
    return pow(n1-n2, 2);
}

int main(){
	
    int n1, n2, dif;
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    
    dif = diferenca(n1, n2);
    
    printf("A diferenca elevada ao quadrado dos dois numeros e %d", dif);
    
    return 0;
}
