#include <stdio.h> //printf ().
#include <stdlib.h> //system (), rand () e srand ().
#include <time.h> //time().

#define TAM 255

typedef struct pessoa {
int id;
char nome[TAM];
char senha[TAM];
double salario;
} tpessoa;

void leStr (char str[TAM]);
void imprimeStr (char str[TAM]);
void imprimeStrTudo (char str[TAM]);

int main () {
tpessoa p;
srand (time (NULL)); //Inicia a geração de inteiros aleatórios com
                    //uma nova semente.
p.id = rand () % 100; //O id é um número aleatório.
printf ("\n Informe o nome: ");
leStr (p.nome);
printf ("\n Informe a senha: ");
scanf ("%s", p.senha); //%s lê palavras, ou seja, o string não pode ter
//espaço em branco.
printf ("\n Informe o salario: ");
scanf ("%lf", &(p.salario));
printf ("\n\n\n ID: %d, Nome: %s, Senha: %s, Salario: %.2f", p.id,
p.nome, p.senha, p.salario);
printf ("\n\n\n");
printf ("\n\n\n Nome ate o \\0: ");
imprimeStr (p.nome);
printf ("\n\n\n Senha ate o \\0: ");
imprimeStr (p.senha);
printf ("\n\n\n Nome ate o final do vetor: ");
imprimeStrTudo (p.nome);
printf ("\n\n\n Senha ate o final do vetor: ");
imprimeStrTudo (p.senha);
printf ("\n\n\n");
system ("pause");
return (0);
}

void leStr (char str[TAM]) {
int i = 0;
scanf ("%c", &str[0]);
for (i = 1; (str[i - 1] != '\n') && (i < TAM - 1); i++)
scanf ("%c", &str[i]);
str[i - 1] = '\0';
}
void imprimeStr (char str[TAM]) {
int i;
for (i = 0; (str[i] != '\0') && (i < TAM); i++)
printf ("%c", str[i]);
}
void imprimeStrTudo (char str[TAM]) {
int i;
for (i = 0; i < TAM; i++)
printf ("%c", str[i]);
}