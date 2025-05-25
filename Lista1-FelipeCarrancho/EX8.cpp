#include <stdio.h>

void verifica(int n){
	
    if (n % 2 == 0){
        printf("Par");
    }
    else{
        printf("Impar");
    }
    return;
}
int main(){
	
    int n;
    
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    verifica(n);

    return 0;
}
