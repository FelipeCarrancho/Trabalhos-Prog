#include <stdio.h>

int main(){
	
	int num;
	
	printf("Todos os numeros de 1000 a 1999 que divididos por 11 dao resto igual a 5: \n");
	
	for (num = 1000; num <= 1999; num++){
		
		if (num % 11 == 5){
			printf("%d\n", num);
		}
	}

	return 0;
}
