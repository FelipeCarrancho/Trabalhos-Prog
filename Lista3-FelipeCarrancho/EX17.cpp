#include <stdio.h>
#include <string.h>

#define MAX_FUNCIONARIOS 100
#define MAX_NOME 50
#define MAX_ENDERECO 100
#define MAX_TELEFONE 20
#define MAX_EMAIL 100

typedef struct{
    char nome[MAX_NOME];
    char endereco[MAX_ENDERECO];
    char telefone[MAX_TELEFONE];
    char email[MAX_EMAIL];
    int diaNascimento;
    int mesNascimento;
    int anoNascimento;
    int anoChegadaEmpresa;
} Funcionario;

int main(){
	
    int numFuncionarios;
    Funcionario funcionarios[MAX_FUNCIONARIOS];

    printf("Digite a quantidade de funcionarios: ");
    scanf("%d", &numFuncionarios);
    getchar(); 

   
    for (int i = 0; i < numFuncionarios; i++){
        printf("\nFuncionario %d:\n", i + 1);
        printf("Nome: ");
        fgets(funcionarios[i].nome, sizeof(funcionarios[i].nome), stdin);
        funcionarios[i].nome[strcspn(funcionarios[i].nome, "\n")] = '\0'; 
        printf("Endereco: ");
        fgets(funcionarios[i].endereco, sizeof(funcionarios[i].endereco), stdin);
        funcionarios[i].endereco[strcspn(funcionarios[i].endereco, "\n")] = '\0'; 
        printf("Telefone: ");
        fgets(funcionarios[i].telefone, sizeof(funcionarios[i].telefone), stdin);
        funcionarios[i].telefone[strcspn(funcionarios[i].telefone, "\n")] = '\0'; 
        printf("E-mail: ");
        fgets(funcionarios[i].email, sizeof(funcionarios[i].email), stdin);
        funcionarios[i].email[strcspn(funcionarios[i].email, "\n")] = '\0'; 
        printf("Dia de nascimento: ");
        scanf("%d", &funcionarios[i].diaNascimento);
        printf("Mês de nascimento: ");
        scanf("%d", &funcionarios[i].mesNascimento);
        printf("Ano de nascimento: ");
        scanf("%d", &funcionarios[i].anoNascimento);
        printf("Ano de chegada a empresa: ");
        scanf("%d", &funcionarios[i].anoChegadaEmpresa);
        getchar(); 
    }

    
    int mesDesejado;
    printf("\nDigite o mes desejado (1 a 12): ");
    scanf("%d", &mesDesejado);

    printf("\nFuncionarios nascidos no mes %d:\n", mesDesejado);
    for (int i = 0; i < numFuncionarios; i++){
        if (funcionarios[i].mesNascimento == mesDesejado){
            printf("%s - Dia %d\n", funcionarios[i].nome, funcionarios[i].diaNascimento);
        }
    }

    
    int anosEmpresaDesejados;
    printf("\nDigite a quantidade de anos de empresa desejados: ");
    scanf("%d", &anosEmpresaDesejados);

    printf("\nFuncionarios com %d anos de empresa:\n", anosEmpresaDesejados);
    for (int i = 0; i < numFuncionarios; i++){
        int anosEmpresa = 2023 - funcionarios[i].anoChegadaEmpresa; 
        if (anosEmpresa == anosEmpresaDesejados){
            printf("%s - Telefone: %s\n", funcionarios[i].nome, funcionarios[i].telefone);
        }
    }

    return 0;
}
