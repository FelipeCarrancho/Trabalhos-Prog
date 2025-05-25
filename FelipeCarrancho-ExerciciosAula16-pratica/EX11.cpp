#include <stdio.h>

typedef struct{
    int hora;
    int minutos;
    int segundos;
} Horario;

typedef struct{
    int dia;
    int mes;
    int ano;
} Data;

typedef struct{
    Data data;
    Horario horario;
    char descricao[50];
} Compromisso;

int main(){
	
    Compromisso compromissos[10];

    for (int i = 0; i < 10; i++){
        printf("\nCompromisso %d:\n", i+1);

        printf("Digite o dia/mes/ano: ");
        scanf("%d %d %d", &compromissos[i].data.dia, &compromissos[i].data.mes, &compromissos[i].data.ano);

        printf("Digite a hora/minuto/segundos: ");
        scanf("%d %d %d", &compromissos[i].horario.hora, &compromissos[i].horario.minutos, &compromissos[i].horario.segundos);

        printf("Digite a descricao do compromisso: ");
        scanf(" %[^\n]s", compromissos[i].descricao);
    }

    for (int i = 0; i < 10; i++){
        printf("\nNo dia %02d/%02d/%04d as %02d:%02d:%02d voce tem o compromisso com %s\n", compromissos[i].data.dia, compromissos[i].data.mes, compromissos[i].data.ano, compromissos[i].horario.hora, compromissos[i].horario.minutos, compromissos[i].horario.segundos, compromissos[i].descricao);
    }

    return 0;
}
