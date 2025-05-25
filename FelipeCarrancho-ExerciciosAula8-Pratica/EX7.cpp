#include <stdio.h>

void contador(int n){
    
    int cont = 1;
    
    while (cont <= n){
        printf("%d", cont);
        cont++;
    }
}

int main(){
    
    int n;
    
    printf("Digite um valor:");
    scanf("%d", &n);
    
    contador(n);
    
    return 0;
}
