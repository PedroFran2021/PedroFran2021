#include <stdio.h> // printf(), scanf()
#include <math.h> // pow().

int main(){

    float ce ;
    
    printf("Informe uma temperatura em Celsius:");
    scanf("%f",&ce);
    
    printf("Transformado em Fahrenheit é F: %.1f\n\n\n",(ce*1.8+32));
    return 0;
}