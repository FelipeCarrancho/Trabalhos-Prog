#include <stdio.h>
#include <stdlib.h>

int main(){
	float x, y , z;
	 
	 printf(" Digite o valor de x: \n ");
	 scanf("%f" , &x);
	 
	  printf("\n Digite o valor de y: ");
	 scanf("%f" , &y);
	 
	  printf("\n Digite o valor de z: ");
	 scanf("%f" , &z);
	 
	 if(x<y+z){
	 	printf("e triangulo\n");
	 }
	 
	 else{
	 	printf("Nao forma um triangulo\n");
	 }
	 
	  if(y<x+z){
	 	printf("e triangulo\n");
	 }
	 
	 else{
	 	printf("Nao forma um triangulo\n");
	 }
	 
	  if(z<x+y){
	 	printf("e triangulo\n");
	 }
	 
	 else{
	 	printf("Nao forma um triangulo\n");
	 }
	 
	 	
	
}
