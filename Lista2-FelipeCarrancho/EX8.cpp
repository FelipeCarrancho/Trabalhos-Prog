#include <stdio.h>

void calculo(){
	
    float num, media, soma = 0;
    int contPos = 0, contNeg = 0, contTotal = 0;

    printf("Digite os valores (termine com 0):\n");

    while (1){
        scanf("%f", &num);

        if (num == 0)
            break;

        soma += num;

        if (num > 0)
            contPos++;
        else
            contNeg++;

        contTotal++;
    }

    if (contTotal > 0){
        media = soma / contTotal;

        printf("Media: %.2f\n", media);
        printf("Quantidade de valores positivos: %d\n", contPos);
        printf("Quantidade de valores negativos: %d\n", contNeg);
        printf("Percentual de valores positivos: %.2f%%\n", (float)contPos / contTotal * 100);
        printf("Percentual de valores negativos: %.2f%%\n", (float)contNeg / contTotal * 100);
    } else{
        printf("Nenhum valor foi digitado.\n");
    }
}

int main(){
	
    calculo();

    return 0;
}
