#include <stdio.h>

float fahrenheitCelsius(float f) {
    return 5 * (f - 32) / 9;
}

int main(){
	
    float f;

    for (f = 50; f <= 150; f++) {
        float c = fahrenheitCelsius(f);
        printf("%f F = %.2f C \n ", f, c);
    }

    return 0;
}
