#include <stdio.h>

typedef struct {
    int codigo;
    char nome[100];
    int vendas[12];
} Produto;

int encontrarProdutoMaisVendido(Produto produtos[], int tamanho) {
    int indiceMaisVendido = 0;
    int maxVendas = produtos[0].vendas[0];

    for (int i = 0; i < tamanho; i++) {
        int totalVendas = 0;
        for (int j = 0; j < 12; j++) {
            totalVendas += produtos[i].vendas[j];
        }
        if (totalVendas > maxVendas) {
            maxVendas = totalVendas;
            indiceMaisVendido = i;
        }
    }

    return indiceMaisVendido;
}

int main(){
	
    Produto produtos[100];
    int numProdutos;
    int indiceMaisVendido;

    printf("Digite o numero de produtos: ");
    scanf("%d", &numProdutos);


    for (int i = 0; i < numProdutos; i++) {
        printf("Produto %d:\n", i + 1);

        printf("Digite o codigo: ");
        scanf("%d", &produtos[i].codigo);

        printf("Digite o nome: ");
        scanf(" %[^\n]", produtos[i].nome);
        printf("\n");

        for (int j = 0; j < 12; j++) {
            printf("Digite as vendas do mes %d: ", j + 1);
            scanf("%d", &produtos[i].vendas[j]);
        }
    }

    indiceMaisVendido = encontrarProdutoMaisVendido(produtos, numProdutos);

    printf("Produto mais vendido:\n");
    printf("\nNome: %s\n", produtos[indiceMaisVendido].nome);
    printf("Codigo: %d\n", produtos[indiceMaisVendido].codigo);

    return 0;
}
