#include <stdio.h>

typedef struct est_Data{
    int dia;
    int mes;
    int ano;
} Data;

int calcularDiferencaDias(const Data* data1, const Data* data2){
	
    Data tempData1 = *data1;
    Data tempData2 = *data2;
    
    int diasData1 = tempData1.dia + 31 * (tempData1.mes - 1) + 365 * (tempData1.ano - 1900);
    
    if (tempData1.mes <= 2){
        tempData1.ano--;
        tempData1.mes += 12;
    }
    
    int diasData2 = tempData2.dia + 31 * (tempData2.mes - 1) + 365 * (tempData2.ano - 1900);
    
    if (tempData2.mes <= 2){
        tempData2.ano--;
        tempData2.mes += 12;
    }

    int diferencaDias = diasData2 - diasData1;

    return diferencaDias;
}

int main(){
	
    Data data1, data2;
    
    printf("De espaco entre o dia mes e ano\n");
    
    printf("Informe a primeira data (dia mes ano): ");
    scanf("%d %d %d", &data1.dia, &data1.mes, &data1.ano);
    
    printf("Informe a segunda data (dia mes ano): ");
    scanf("%d %d %d", &data2.dia, &data2.mes, &data2.ano);

    int diferencaDias = calcularDiferencaDias(&data1, &data2);

    printf("A diferenca em dias entre as duas datas: %d\n", diferencaDias);

    return 0;
}
