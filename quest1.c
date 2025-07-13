#include <stdio.h>

void calculaSoma(int a, int b, int *resultado) {
    *resultado = a + b;  
}

int main() {
    int num1 = 5, num2 = 3;
    int soma;

    
    calculaSoma(num1, num2, &soma);

    printf("Soma: %d\n", soma);  

    return 0;
}