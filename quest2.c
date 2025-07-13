#include <stdio.h>
#include <stdlib.h> 

int* encontraPrimeiraOcorrencia(int *X, int tamanho, int y) {
    int *ptr = X; 
    
    for (; ptr < X + tamanho; ptr++) {
        if (*ptr == y) {
            return ptr; 
        }
    }
    
    return NULL; 
}

int main() {
    int vetor[] = {5, 2, 9, 1, 5, 6}; 
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int y = 5; 

 
    int *endereco = encontraPrimeiraOcorrencia(vetor, tamanho, y);

    if (endereco != NULL) {
        printf("Valor %d encontrado no endereco: %p\n", y, (void*)endereco);
        printf("Posicao no vetor: %ld\n", endereco - vetor); 
    } else {
        printf("Valor %d nao encontrado no vetor.\n", y);
    }

    return 0;
}