#include <stdio.h>

char sexo(){
	char sex;
	while(sex !='F' && sex !='M'){
		printf("\nDigite o sexo do usuario (F ou M):");
    	scanf(" %c", &sex);
	}
	return sex;
}

int idade(){
	int age;
	while(age < 0 || age > 130){
		printf("\nDigite a idade do usuario:");
    	scanf("%d", &age);
	}
	return age;
}

int main(){
	
	char sex;
	int ida;
	int cont = 0;
	
	while(cont < 15){
		sex = sexo();
		ida = idade();
		printf("\nUsuario %d", cont+1);
		cont++;
	}
	return 0;
}
