#include <stdio.h>

int main(){
	
	int codigo;
	
	printf("Digite o codigo do seu cargo: ");
	scanf("%d", &codigo);
	
	switch (codigo){
		case 101:
			printf("Vendedor");
			break;
		case 102:
			printf("Atendente");
			break;
		case 103:
			printf("Auxiliar Tecnico");
			break;
		case 104:
			printf("Assistente");
			break;
		case 105:
			printf("Coordenador de Grupo");
			break;
		case 106:
			printf("Gerente");
			break;
		default:
			printf("Codigo Invalido!");
			break;
	}
	
	return 0;
}
