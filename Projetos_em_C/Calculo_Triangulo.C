#include <stdio.h> // printf(), scanf()
#include <math.h> // sqrt()

int main() {
    float cateto_a, cateto_b, hipotenusa;

    printf("Informe o valor do cateto A: ");
    scanf("%f", &cateto_a);

    printf("Informe o valor do cateto B: ");
    scanf("%f", &cateto_b);

    // Calcular a hipotenusa
    hipotenusa = sqrt(cateto_a * cateto_a + cateto_b * cateto_b);

    printf("O valor da hipotenusa do triângulo é: %.2f\n", hipotenusa);

    return 0;
}
