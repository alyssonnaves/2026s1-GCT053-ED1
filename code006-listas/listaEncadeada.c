#include <stdio.h>
#include <stdlib.h>
/*
=====
Estrutura do no (node)
=====
*/
typedef struct No
{
    int dado;
    struct No *prox;
} No;

// criar no
No* criar_no(int valor){
    No *novo = (No*) malloc(sizeof(No));  // alocacao dinamica
    if (novo == NULL){
        printf("Erro: falha ao alocar memoria.\n");
        return NULL;
    }
    novo->dado = valor;
    novo->prox = NULL;
    return novo;
}

// imprimir lista
void imprimir_lista(No *head){
    No *atual = head;
    printf("Lista: ");
    
    while (atual != NULL){
        printf("%d => ", atual->dado);
        atual = atual->prox;
    }
    printf("NULL\n");
}

/*
Inserir no inicio  O(1)
passos:
1- Criar novo no
2- novo->dado = valor
3- novo->prox = head (apontar para o antigo head)
4- head = novo
*/
No* inserir_inicio(No *head, int valor){
    No *novo = criar_no(valor);
    if (novo == NULL){
        return head;
    }
    novo->prox = head;
    head = novo;
    imprimir_lista(head);
    return head;
}

int main(){
    No *lista = NULL;
    // inserir no inicio
    lista = inserir_inicio(lista, 30);
    lista = inserir_inicio(lista, 20);
    lista = inserir_inicio(lista, 10);
    return 0;
}