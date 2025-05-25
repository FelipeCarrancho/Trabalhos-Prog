#include <stdio.h>
#include <string.h>

typedef struct{
    char titulo[50];
    char autor[30];
    int codigo;
    float preco;
} Livro;

int main(){
	
    Livro livros[2];
    char nome[50];
    int i;

    for (i = 0; i < 2; i++){
    	
        printf("Digite o titulo, autor, codigo e preco do livro %d :\n", i+1);
        fgets(livros[i].titulo, 50, stdin);
        fflush(stdin);
        
        fgets(livros[i].autor, 30, stdin);
        fflush(stdin);
        
        scanf("%d %f", &livros[i].codigo, &livros[i].preco);
        fflush(stdin);
    }

    printf("Digite o titulo (ou parte) do livro procurado:\n");
    fgets(nome, 50, stdin);
    fflush(stdin);

    for (i = 1; i < 2; i++){
    	
        if (strspn(livros[i].titulo, nome) != 0){
            printf("Titulo: %s\n", livros[i].titulo);
            printf("Autor: %s\n", livros[i].autor);
            printf("Codigo: %d\n", livros[i].codigo);
            printf("Preco: %f\n", livros[i].preco);
        }
    }

    return 0;
}
