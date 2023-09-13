#include <stdio.h> //printf(), scanf().
#include <math.h> // pow().

int main() {
    float salario_minimo,salario_funcionario;

    printf("Informe o valor do salário mínimo atualmente:R$");
    scanf("%f",&salario_minimo);

    printf("Informe o salário de um Funcionário R$:");
    scanf("%f",&salario_funcionario);

    printf("A Quantidade de salários mínimos é de R$: %.0f\n\n\n",(salario_funcionario/salario_minimo));
    return 0;


}