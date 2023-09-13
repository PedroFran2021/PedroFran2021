#include <stdio.h> //printf().
#include <string.h> //strlen().

int main() {
    char minhaString[] = "Olá, Mundo!";
    int comprimento;

// Calcula o comprimento da string usando a função strlen:
    comprimento = strlen(minhaString);

// Exibe o comprimento da string na tela:
    printf("A string \"%s\" possui %d caracteres.\n", minhaString,
    comprimento);

    return 0;
}