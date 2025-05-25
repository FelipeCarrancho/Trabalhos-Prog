#include <stdio.h>
#include <stdlib.h>

void converter(int m){
	printf("Corresponde a: %d decimetros, %d centimetros e %d milimetros", m*10, m*100, m*1000);
    return;
}

int main(){
	
    int m;
    printf("Digite o valor em metros: ");
    scanf("%d", &m);
    
    converter(m);

    return 0;
}
