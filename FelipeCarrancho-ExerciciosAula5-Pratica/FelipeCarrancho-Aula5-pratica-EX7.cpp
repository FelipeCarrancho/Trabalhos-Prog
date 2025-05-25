#include <stdio.h>
#include <stdlib.h>

void operacoes(int n1, int n2){
    printf("Operacoes de inteiros\n");
    printf("%d + %d = %d\n", n1, n2, n1+n2);
    printf("%d - %d = %d\n", n1, n2, n1-n2);
    printf("%d x %d = %d\n", n1, n2, n1*n2);
    printf("%d / %d = %d\n", n1, n2, n1/n2);
    printf("%d %% %d = %d\n", n1, n2, n1%n2);
    return;
}

int main(){
	
    int n1, n2;
    printf("Insira os dois numeros inteiros: ");
    scanf("%d %d", &n1, &n2);
    
    operacoes(n1,n2);

    return 0;
}
