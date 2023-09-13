#include <stdio.h> //printf (), scanf ().
#include <stdlib.h> //system ().

void preencher (int vet[5]); //Protótipo ou assinatura.
int maior (int vet[5]); //Protótipo ou assinatura.

int main() {
int max, v[5];

preencher (v);
max = maior (v);

    printf ("\n\n\nMaior valor informado: %d \n\n\n", max);
    system ("pause");
    return 0;
}

void preencher (int vet[5]) {
int i;

    for (i = 0; i < 5; i++) {
    printf ("\nInforme um numero: ");
    scanf ("%d", &vet[i]);
}
}
    int maior (int vet[5]) {
    int i, m;
    m = vet[0];

    for (i = 1; i < 5; i++) {
        if (vet[i] > m)
        m = vet[i];
}
    return m;
}