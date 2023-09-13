#include <stdio.h> // printf(), scanf().

int main() {

    float peso_atual;
    float novo_peso;

    printf("Informe o peso atual KG: ");
    scanf("%f", &peso_atual);

    // Calcular o novo peso se a pessoa engordar 15%.
    novo_peso = peso_atual + (0.15 * peso_atual);

    printf("Se a pessoa engordar 15%%, o novo peso sera: %.2f\n", novo_peso);

    // Calcular o novo peso se a pessoa emagrecer 20%.
    novo_peso = peso_atual - (0.20 * peso_atual);

    printf("Se a pessoa emagrecer 20%%, o novo peso sera: %.2f\n", novo_peso);

    return 0;
}
