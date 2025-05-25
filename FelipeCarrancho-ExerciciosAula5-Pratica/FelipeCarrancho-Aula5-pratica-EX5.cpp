#include <stdio.h>
#include <stdlib.h>

void converter(int s){
    printf("Equivale a: %d horas, %d minutos e %d segundos", s/60/60%24, s/60%60, s%60);
    return;
}

int main(){
	
    int segundos;
    printf("Tempo total em segundos: ");
    scanf("%d", &segundos);
    
    converter(segundos);

    return 0;
}
