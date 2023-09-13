#include <stdio.h> //printf ().

int main() {
int num = 65, *pt, **ptpt;

pt = &num; //pt recebe o endereço de num.
ptpt = &pt; //ptpt recebe o endereço de pt.

printf ("\n num: %d", num); //imprimir o conteúdo de num - 65.
printf ("\n &num: %p", &num); //imprimir o endereço de num.
printf ("\n\n");

printf ("\n *pt: %d", *pt); //imprimir o conteúdo da posição de memória para onde pt aponta (que é o conteúdo de num - 65).
printf ("\n pt: %p", pt); //imprimir o conteúdo de pt (que é o endereço de num).
printf ("\n &pt: %p", &pt); //imprimir o endereço de pt.
printf ("\n\n");

printf ("\n **ptpt: %d", **ptpt); //imprimir o conteúdo da posição de memória para onde o ponteiro armazenado em ptpt aponta (que é o conteúdo de num - 65).
printf ("\n *ptpt: %p", *ptpt); //imprimir o conteúdo da posição de memória para onde ptpt aponta (que é o conteúdo de pt – endereço de num).
printf ("\n ptpt: %p", ptpt); //imprimir o conteúdo de ptpt (que é o endereço de pt).
printf ("\n &ptpt: %p", &ptpt); //imprimir o endereço de ptpt.
printf ("\n\n");

    return 0;
}