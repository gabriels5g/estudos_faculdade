#include <stdio.h>
// vetor de caracteres
int main(){
   char frase[101];
   printf("\n Digite uma frase");
   fflush(stdin);
   fgets(frase,101, stdin);

   printf("\nFrase digitada: %s", frase);
}




//#include <stdio.h>
//
//int main() {
//  int valor1=0, valor2=0;
//
//  printf("\n Digite o primeiro valor: ");
//  scanf("%f", valor1);
//  printf("\n Digite o segundo valor: ");
//  scanf("%f",valor2);
//  printf("Variavel 1 = %.2f", valor1);
//  printf("Variavel 2 = %.2f", valor2);
//}





