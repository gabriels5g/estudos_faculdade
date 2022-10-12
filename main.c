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





//#include <stdio.h>
//vetor de caracteres
//int main(){
//    char frase[101];
//    printf("\n Digite uma frase");
//    fflush(stdin);
//    fgets(frase,101, stdin);
//
//    printf("\nFrase digitada: %s", frase);
//}
//


//#include <stdio.h>
////matrizes
//int main(){
//    float notas[3][2];
//
//    printf("Digite uma nota: ");
//
//    scanf("%f", notas[1][0]);
//
//    printf("Nota digitada: %.2f", notas[1][0]);
//}




//#include <stdio.h>
//int main(){
//    int num[2] = {10, 20};
//    printf("\n Utilizando índice do vetor: %d", num[0]);
//    printf("\n Utilizando ponteiro: %d", *num);
//    return 0;
//}

#include <stdio.h>

#define TAM_NOME_CLIENTE 100

struct cliente {
    char nome[TAM_NOME_CLIENTE];
    int idade;
};

int main(void){
    struct cliente cli;
    int classificacao_filme;

    printf("\n Informe o nome do cliente: ");
    fflush(stdin);
    fgets(cli.nome, TAM_NOME_CLIENTE, stdin);

    printf("\n Informe a idade do cliente: ");
    scanf("%d", &cli.idade);

    printf("\n Informe a classificação do filme: ");
    scanf("%d", &classificacao_filme);

    printf("\n Cliente: %s", cli.nome);
    printf("\n Idade: %d anos", cli.idade);
    printf("\n Classificação do filme: %d anos", classificacao_filme);


}

