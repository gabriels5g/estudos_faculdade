#include <stdio.h>

struct salario {
  float valor_salario
};


int main(void) {struct salario sa;

  printf("Informe seu salario: ");
  scanf("\n %f", &sa.valor_salario);
  
  if (sa.valor_salario <= 1045,00)
  {
    printf("INSS a ser pago é 7,5%");
  } else if (sa.valor_salario > 1045,01 && sa.valor_salario <= 2089,60); {
    printf("INSS a ser pago é 9%");
  };
}