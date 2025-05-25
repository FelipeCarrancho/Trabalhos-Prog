#include <stdio.h>

int main(){
	
	float chico = 1.50, ze = 1.40;
    int anos = 0;
    printf ("Enquanto tempo sera necessario para que Ze seja maior que Chico \n");
    
    do{
        
		chico = chico + 0.02;
        ze = ze + 0.03;
        anos++;
         
        }while (chico > ze);
        
        printf ("Sera necessario %d anos", anos);
        return 0;
        
}
