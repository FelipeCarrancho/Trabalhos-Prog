#include <stdio.h>

int verifica(int num){
	
	int i;
	
    if (num <= 1){
        return 0;  
    }

    for (i = 2; i * i <= num; i++){
        if (num % i == 0){
            return 0;  
        }
    }

    return 1;  
}

int main(){
	
    int num;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);

    if (verifica(num)){
        printf("%d e primo", num);
    } else {
        printf("%d nao e primo", num);
    }

    return 0;
}
