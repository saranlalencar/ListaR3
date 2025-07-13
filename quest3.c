#include <stdio.h>

void obterenderecos(int *px, int n, int **pv) {
    *(pv + 0) = NULL;
    *(pv + 1) = NULL;

    for (int i = 0; i < n; i++) {
        if (*(px + i) % 2 == 0 && *(pv + 0) == NULL) {
            *(pv + 0) = (px + i);
        }
        else if (*(px + i) % 2 != 0 && *(pv + 1) == NULL) {
            *(pv + 1) = (px + i);
        }

        if (*(pv + 0) != NULL && *(pv + 1) != NULL) {
            break;
        }
    }
}

int main() {
    int x[] = {9, 5, 4, 3};
    int *v[2];

    obterenderecos(x, 4, v);

    if (v[0] != NULL)
        printf("Primeiro par: %d\n", *v[0]);
    else
        printf("Nenhum número par encontrado.\n");

    if (v[1] != NULL)
        printf("Primeiro ímpar: %d\n", *v[1]);
    else
        printf("Nenhum número ímpar encontrado.\n");

    return 0;
}