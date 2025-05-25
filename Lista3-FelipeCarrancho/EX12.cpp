#include <stdio.h>
#include <string.h>

void inverterString(char strDest[], char strSrc[], int k){
	
    int i;
    
    if (k > 20){
        for (i = 0; i < 20; i++){
            strDest[i] = strSrc[(20 - 1) - i];
            printf("%c", strDest[i]);
        }
    } else {
        for (i = 0; i < k; i++){
            strDest[i] = strSrc[(k - 1) - i];
            printf("%c", strDest[i]);
        }
    }
}

int main(){
	
    char strDest[20], strSrc[20];
    int k;
    
    printf("Digite uma string:\n");
    fgets(strSrc, 20, stdin);
    
    printf("Digite um numero inteiro:\n");
    scanf("%d", &k);
    
    inverterString(strDest, strSrc, k);
    
    return 0;
}
