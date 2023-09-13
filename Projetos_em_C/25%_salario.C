#include <stdio.h> //printf(), scanf().
#include <math.h> // pow().

int main(){
    float salario,novo_salario;
    novo_salario = 0.25;

    printf("Informe seu salário R$:");
    scanf("%f",&salario);

    printf("Seu novo salário é R$: %.2f \n\n\n",(novo_salario*salario+salario));
    return 0;
}