#include<stdio.h>

float calcularIMC() {
    float peso, altura, imc;

    printf("\ninforme seu peso em (KG): ");
    scanf("%f", &peso);
    printf("\nInform sua altura (em metros): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    return imc;
}

int main() {
    float imc = calcularIMC();

    if (imc < 18.5)
    {
        printf("Abaixo do peso");
    } 
    else if (imc < 24.9)
    {
        printf("peso ideal");
    }
    else {
        printf("acima do peso");
    }
    
    
}