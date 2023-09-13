#include <stdio.h> //printf ().
#include <stdlib.h> //system (), rand () e srand ().
#include <time.h> //time().

#define TAM 3

//Assinaturas ou protótipos das funções/procedimentos.
void preenche (int mat[TAM][TAM]);
void imprime (int mat[TAM][TAM]);
int maior (int mat[TAM][TAM]);

int main () {
int resp, m[TAM][TAM];
    preenche (m);
    imprime (m);
    resp = maior (m);
    printf ("\nMaior = %d\n\n\n", resp);
    system ("pause");
return (0);
}

void preenche (int m[TAM][TAM]) {
int i, j;

srand (time (NULL)); //Inicia a geração de inteiros aleatórios com uma nova semente.
    for (i = 0; i < TAM; i++)
    for (j = 0; j < TAM; j++)
        m[i][j] = rand () % 100; // Gera valores aleatórios inteiros na faixa de 0 a 99.
}

void imprime (int m[TAM][TAM]) {
int i, j;

    for (i = 0; i < TAM; i++) {
    for (j = 0; j < TAM; j++)
        printf (" %d ", m[i][j]);
        printf ("\n");
}

}
int maior (int m[TAM][TAM]) {
int resp, i, j;
resp = m[0][0];

    for (i = 0; i < TAM; i++)
    for (j = 0; j < TAM; j++)
        if (m[i][j] > resp)
            resp = m[i][j];
    return resp;
}