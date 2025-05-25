#include <stdio.h>
#include <string.h>
#include <locale.h>

typedef struct{
    char nome[50];
    int idade;
    int telefone;
    char email[50];
}Contato;

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
    Contato p[4];
    
    for(int i = 0; i < 4; i++){
        printf("Digite o nome da %d° pessoa: ", i+1);
        fgets(p[i].nome,50,stdin);
        fflush(stdin);
        
        printf("Digite a idade da %d° pessoa: ", i+1);
        scanf("%d", &p[i].idade);
        fflush(stdin);
        
        printf("Digite o telefone da %d° pessoa: ", i+1);
        scanf("%d", &p[i].telefone);
        fflush(stdin);
        
        printf("Digite o email da %d° pessoa: ", i+1);
        fgets(p[i].email,50,stdin);
        fflush(stdin);
        
        getchar();
    }
    
    int velha = 0;
    
    for (int i = 1; i < 4; i++){
        if (p[i].idade > p[velha].idade){
            velha = i;
        }
    }
    
    printf("\nInformacoes pessoa mais velha\n");
    printf("Nome: %s \n Idade: %d \n Telefone: %d \n Email: %s \n",p[velha].nome, p[velha].idade, p[velha].telefone, p[velha].email );
    
    return 0;
}
