#include <stdio.h>

void intervalo(int n1, int n2){
	
    int cont;
    if (n1 < n2) {
        cont = n1;
        while (cont <= n2) {
            printf("%d ", cont);
            cont++;
        }
    } else {
        cont = n1;
        while (cont >= n2) {
            printf("%d ", cont);
            cont--;
        }
    }
    return;
}

int main(){
	
    int n1, n2;
    printf("Digite dois numeros inteiros positivos: ");
    scanf("%d %d", &n1, &n2);
    
    intervalo(n1, n2);
    
    return 0;
    
}
