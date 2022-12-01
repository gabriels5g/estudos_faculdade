#include <stdio.h>    // para operações de entrada e saída
#include <stdlib.h>   // para alocação dinâmica de memória
#include <stdbool.h>  // para uso do tipo de dados “bool”
#include <assert.h>   // para uso da instrução “assert”

struct No {
    int info;
    struct No* proximo;
};

struct Fila {
    struct No* inicio;
    struct No* fim;
    int tamanho;
};


struct Fila* criar() {
    struct Fila* nova_fila = (struct Fila*) malloc(sizeof(struct Fila));
    if (nova_fila != NULL) {
        nova_fila->inicio = NULL;
        nova_fila->fim = NULL;
        nova_fila->tamanho = 0;
    }
    return nova_fila;
};

void enfileirar(struct Fila* f, int item) {
    assert(f != NULL);    
    struct No* novo_no = (struct No*) malloc(sizeof(struct No));
    if (novo_no != NULL) {
        novo_no->info = item;
        novo_no->proximo = NULL;

	if (f->fim != NULL) {
            f->fim->proximo = novo_no;   
        } else {        
            f->inicio = novo_no;
        }
        f->fim = novo_no;
        f->tamanho++;
    };
};

int desenfileirar(struct Fila* f) {
    assert(f != NULL);    
    assert(f->inicio != NULL);
    struct No* aux = f->inicio;
    int elemento = aux->info;
    f->inicio = aux->proximo;
    if (f->inicio == NULL) {
        f->fim = NULL;    
    }
    f->tamanho--; 
    free(aux);
    return elemento;    
};

bool vazia(struct Fila* f) {
    assert(f != NULL);        
    return (f->inicio == NULL);    
};

int tamanho(struct Fila* f) {
    assert(f != NULL);        
    return f->tamanho;    
};

int inicio(struct Fila* f) {
    assert(f != NULL);     
    assert(f->inicio != NULL);         
    return f->inicio->info;    
};

void liberar(struct Fila* f) {
    assert(f != NULL);     
    while(f->inicio != NULL) {
        desenfileirar(f); 
    }
    free(f);    
};

int main() {  
    struct Fila* minha_fila = criar();

    enfileirar(minha_fila, 1);
    enfileirar(minha_fila, 2);
    enfileirar(minha_fila, 3);
    enfileirar(minha_fila, 4);
    enfileirar(minha_fila, 5);
    enfileirar(minha_fila, 6);
    enfileirar(minha_fila, 7);
    enfileirar(minha_fila, 8);
      
    printf("Tamanho: %d ", tamanho(minha_fila));

    printf("\nMinha fila: [%d ", desenfileirar(minha_fila));
    printf("%d ", desenfileirar(minha_fila));
    printf("%d ", desenfileirar(minha_fila));
    printf("%d ", desenfileirar(minha_fila));
    printf("%d]\n", desenfileirar(minha_fila));

    printf("Tamanho: %d ", tamanho(minha_fila));
    printf("\nEstá vazia (1 - Sim, 0 - Não)? %d ", vazia(minha_fila));

    liberar(minha_fila);  
    
    return 0;
};
