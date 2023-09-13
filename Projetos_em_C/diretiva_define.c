#include <stdio.h> //printf (), scanf ().
#include <stdlib.h> //system ().
#define TAM 5

void preencher (int vet[TAM]); //Protótipo ou assinatura.
int maior (int vet[TAM]); //Protótipo ou assinatura.

int main() {
int max, v[TAM];

preencher (v);
max = maior (v);
printf ("\n\n\nMaior valor informado: %d \n\n\n", max);
system ("pause");
return 0;
}

void preencher (int vet[TAM]) {
int i;

    for (i = 0; i < TAM; i++) {
        printf ("\nInforme um numero: ");
        scanf ("%d", &vet[i]);
}
}

int maior (int vet[TAM]) {
int i, m;
m = vet[0];

    for (i = 1; i < TAM; i++) {
        if (vet[i] > m)
        m = vet[i];
}
    return m;
}