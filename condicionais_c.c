#include <stdio.h>

int main()
{
 float salario;

 printf("informe seu salario: ");
 scanf("%.2f", &salario);

 if(salario <= 1212,00) {
  printf("aliquota 7,5%");
 } 
 else if (salario > 1212,01 && salario <= 2427,35)
 {
  printf("aliquota 9%");
 }
  else if (salario > 2427,36 && salario <= 3641,03)
 {
  printf("aliquota 12%");
 }

}
