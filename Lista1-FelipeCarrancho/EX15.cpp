#include <stdio.h>

void media(float n1, float n2, float trab, int falta){
	
    float med;
    trab = 2.0 * trab;
	n1 = 3.0 * n1; 
	n2 = 5.0 * n2;	
	med = (trab + n1 + n2) / 10;
	
    if(falta > 15){
        printf("Reprovado!");
    }
    else if(falta <= 15 && med >= 7.0){
        printf("Aprovado!");
    }
    else if(med < 7.0){
        printf("O aluno ira para prova final!");
    }
    
    return;
}

int main(){
	
    float p1, p2, t1;
    int faltas;
    
    printf("Digite a nota da primeira prova: ");
    scanf("%f", &p1);
    
    printf("Digite a nota da segunda prova: ");
    scanf("%f", &p2);
    
    printf("Digite a nota do trabalho: ");
    scanf("%f", &t1);
    
    printf("Digite quantas faltas aluno teve: ");
    scanf("%d", &faltas);
    
    media(p1, p2, t1, faltas);

    return 0;
}
