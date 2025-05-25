#include <stdio.h>

typedef struct{
    char nome[100];
    int idade;
} pessoa;

void ordenar(pessoa pessoas[]){
	
    int i, j;
    pessoa temp;
    
    for (i = 0; i < 3 - 1; i++){
        for (j = 0; j < 3 - 1 - i; j++){
            if (pessoas[j].idade > pessoas[j + 1].idade){
                temp = pessoas[j];
                pessoas[j] = pessoas[j + 1];
                pessoas[j + 1] = temp;
            }
        }
    }
}

void lerString(char destino[], int tamanho){
    int i = 0;
    char c;
    
    while ((c = getchar()) != '\n' && i < tamanho - 1){
        destino[i++] = c;
    }
    
    destino[i] = '\0';
}

int main(){
	
    pessoa pessoas[3];
    int i;
    
    for (i = 0; i < 3; i++){
    	
        printf("Digite o nome da pessoa %d: ", i + 1);
        lerString(pessoas[i].nome, 100);
        
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &pessoas[i].idade);
        getchar();  
    }
    
    ordenar(pessoas);
    
    printf("\nNomes em ordem crescente de idade:\n");
    for (i = 0; i < 3; i++) {
        printf("%s\n", pessoas[i].nome);
    }
    
    return 0;
}
