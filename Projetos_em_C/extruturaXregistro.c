#include <stdio.h> //printf ().
#include <stdlib.h> //system (), rand () e srand ().
#include <time.h> //time().

struct pessoa {
int id;
double salario;
} ;

int main () {

    struct pessoa p;
    
    srand (time (NULL)); //Inicia a geração de inteiros aleatórios com uma nova semente.
    p.id = rand () % 100; //O id é um número aleatório entre 0 e 99.
    printf ("\nInforme o salario: ");
    scanf ("%lf", &(p.salario));
    printf ("\n\n\n ID: %d, Salario: %.2f", p.id, p.salario);
    printf ("\n\n\n");
    system ("pause");
return (0);
}