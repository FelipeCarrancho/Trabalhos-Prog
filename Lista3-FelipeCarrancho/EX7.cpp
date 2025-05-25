#include <stdio.h>

void trianguloPascalFigura1(int num){
	
    int triangulo[num][num];
    
    for (int i = 0; i < num; i++){
        triangulo[i][0] = 1;
    }

    for (int i = 1; i < num; i++){
        for (int j = 1; j <= i; j++){
            triangulo[i][j] = triangulo[i - 1][j - 1] + triangulo[i - 1][j];
        }
    }

    printf("\nTriangulo de Pascal (Figura 1):\n");
    for (int i = 0; i < num; i++){
        for (int j = 0; j <= i; j++){
            printf("%d \n", triangulo[i][j]);
        }
    }
}

void trianguloPascalFigura2(int num){
	
    int triangulo[num][num];

    for (int i = 0; i < num; i++){
        triangulo[0][i] = 1;
    }

    for (int i = 1; i < num; i++){
        for (int j = 0; j < num; j++){
            triangulo[i][j] = triangulo[i - 1][j] + (j > 0 ? triangulo[i - 1][j - 1] : 0);
        }
    }

    printf("\nTriangulo de Pascal (Figura 2):\n");
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num - i; j++){
            printf("  ");
        }
        for (int j = 0; j <= i; j++) {
            printf("%d  \n", triangulo[i][j]);
        }
    }
}

int main(){
	
    int num;

    printf("Digite o numero de linhas do Triangulo de Pascal: ");
    scanf("%d", &num);

    trianguloPascalFigura1(num);
    trianguloPascalFigura2(num);

    return 0;
}
