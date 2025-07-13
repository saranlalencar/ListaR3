#include <stdio.h>

void obterenderecos(int *px, int n, int **pv) {
    *(pv + 0) = NULL; 
    *(pv + 1) = NULL; 

    for (int i = 0; i < n; i++) {
        int *atual = px + i;

        if (*atual % 2 == 0) {
            if (*(pv + 0) == NULL || *atual < *(*(pv + 0))) {
                *(pv + 0) = atual;
            }
        } else { 
            if (*(pv + 1) == NULL || *atual < *(*(pv + 1))) {
                *(pv + 1) = atual;
            }
        }
    }
}

int main() {
    int x[] = {13, 2, 8, 9, 5, 4, 10};
    int *v[2];

    obterenderecos(x, 7, v);

    if (*(v + 0) != NULL)
        printf("Menor par: %d\n", *(*(v + 0)));
    else
        printf("Nenhum número par encontrado.\n");

    if (*(v + 1) != NULL)
        printf("Menor ímpar: %d\n", *(*(v + 1)));
    else
        printf("Nenhum número ímpar encontrado.\n");

    return 0;
}