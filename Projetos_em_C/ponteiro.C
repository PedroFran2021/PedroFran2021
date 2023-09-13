#include <stdio.h> //printf ().
int main() {
int num = 5, *pt;

pt = &num; //pt recebe o endereço de num.

printf ("\n num: %d", num); //imprimir o conteúdo de num.
printf ("\n &num: %p", &num); //imprimir o endereço de num.
printf ("\n\n");

printf ("\n *pt: %d", *pt); //imprimir o conteúdo da posição de memória para onde pt aponta.
printf ("\n pt: %p", pt); //imprimir o conteúdo de pt (que é o endereço de num).
printf ("\n &pt: %p", &pt); //imprimir o endereço de pt.
printf ("\n\n");
return 0;
}