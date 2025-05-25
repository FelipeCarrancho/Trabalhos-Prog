#include <stdio.h>

void classificaNadador(int idade){
	
    if(idade >= 5 && idade <=7){
        printf("Categoria infantil A");
    }
    else if(idade >= 8 && idade <= 10){
        printf("Categoria intantil B");
    }
    else if(idade >= 11 && idade <= 13){
        printf("Categoria juvenil A");
    }
    else if(idade >= 14 && idade <= 17){
        printf("Categoria juvenil B");
    }
    else if(idade >= 18 && idade <= 30){
        printf("Categoria adulto");
    }
    else if(idade > 30){
        printf("Categoria sênior");
    }
    return;
}

int main(){
	
    int age;
    printf("Digite a idade do nadador: ");
    scanf("%d", &age);
    
    classificaNadador(age);
    
    return 0;
}
