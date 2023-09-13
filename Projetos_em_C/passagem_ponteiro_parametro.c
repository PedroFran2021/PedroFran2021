#include <stdio.h> //printf (), scanf ().

void maior (int n1, int n2, int *r); //Protótipo ou assinatura.

int main() {
int num1, num2, resp;

printf ("\nInforme o primeiro numero: ");
scanf ("%d", &num1);

printf ("\nInforme o segundo numero: ");
scanf ("%d", &num2);

maior (num1, num2, &resp);
printf ("\nMaior numero informado: %d", resp);
printf ("\n\n\n");
return 0;
}

void maior (int n1, int n2, int *r) {
*r = n1;
if (n2 > n1)
*r = n2;
}