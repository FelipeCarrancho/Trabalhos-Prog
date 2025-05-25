#include <stdio.h>
#include <string.h>

void completarStr(char strA[], char strB[], int tamanho) {
    int tamanhoA = strlen(strA);
    int tamanhoB = strlen(strB);
    
    if (tamanhoA + tamanhoB >= tamanho) {
        int maxtamanhoB = tamanho - tamanhoA - 1;
        char temp = strB[maxtamanhoB];
        strB[maxtamanhoB] = '\0';
        strcat(strA, strB);
        strB[maxtamanhoB] = temp;
    } else {
        strcat(strA, strB);
    }
    
    printf("String atualizada: %s\n", strA);
}

int main() {
    int tamanho = 0;
    printf("Digite o tamanho da sua string: \n");
    scanf("%d", &tamanho);
    
    char strA[tamanho];
    char strB[tamanho];
    
    printf("Digite a sua string A: \n");
    scanf("%s", strA);
    
    printf("Digite a sua string B: \n");
    scanf("%s", strB);
    
    completarStr(strA, strB, tamanho);
    
    return 0;
}

