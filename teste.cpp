#include <stdio.h>
#include <string.h>

typedef struct{
    char placa[8];
    char marca[30];
    char modelo[20];
    int ano;
}Veiculos;

int main()
{
    int n, opcao, len;
    Veiculos v[20];
    
    
    printf("Menu: \n");
    printf("1 - Cadastrar as informa��es de um ve�culo.\n");
    printf("2 - Verificar se uma placa est� no formato correto (AAADDDD) (A s�o letras e D s�o d�gitos).\n");
    printf("3 - Imprimir por ano.\n");
    printf("4 - Pesquisar ve�culo por placa.\n");
    printf("5 - Imprimir todos os ve�culos cadastrados.\n");
    printf("0 - Sair do programa.\n");
    printf("Digite a opcao desejada: \n");
    scanf("%d", &opcao);
    getchar();
    
    while(opcao != 0){
        switch(opcao){
           case 1:
                printf("Digite a quantidade de ve�culo que quer cadastrar: ");
                scanf("%d", &n);
                getchar();
                for(int i = 0; i < n; i++){
                    printf("Digite a placa do ve�culo: ");
                    fgets(v[i].placa,8,stdin);
                    fflush(stdin);
                    printf("Digite a marca do ve�culo: ");
                    fgets(v[i].marca,30,stdin);
                    fflush(stdin);
                    printf("Digite o modelo do ve�culo: ");
                    fgets(v[i].modelo,20,stdin);
                    fflush(stdin);
                    printf("Digite o ano do ve�culo: ");
                    scanf("%d", &v[i].ano);
                    fflush(stdin);
                    getchar();
                }
                break;
            case 2:
                int i;
                len = strlen(v[i].placa);
                if(len != 7){
                    printf("Placa est� no formato incorreto.");
                }
                else if(len == 7){
                    printf("Placa est� no formato correto.");
                }
                break;
				case 3:
                int anoMax, anoMin;
                printf("Digite o ano maximo: ");
                scanf("%d", &anoMax);
                printf("Digite o ano minimo: ");
                scanf("%d", &anoMin);
                for(int i = 0; i < n; i++){
                    if(v[i].ano >= anoMin && v[i].ano <= anoMax){
                        printf("Placa: %s\nModelo: %s\nMarca: %s\nAno: %d\n", v[i].placa, v[i].modelo, v[i].marca, v[i].ano);
                    }
                }
                break;
            case 4:
                char pesquisa[8];
                int indice;
                printf("Digite a placa desejada: ");
                fgets(pesquisa,8,stdin);
                for(int i = 0; i < n; i++){
                    if(v[i].placa == pesquisa){
                        indice = i;
                    }
                    else{
                        return -1;
                    }
                }
                printf("O veiculo %d possui essa placa", indice);
                break;
            case 5:
                for(int i = 0; i < n; i++){
                    printf("Placa: %s\nModelo: %s\nMarca: %s\nAno: %d\n", v[i].placa, v[i].modelo, v[i].marca, v[i].ano);
                }
                break;
            case 0:
                printf("Saindo do programa.");
                break;
            default:
                printf("Op��o inv�lida.");
        }
    }
    return 0;
}
