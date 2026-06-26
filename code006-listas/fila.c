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

No* inserir_fim(No *head, int valor){
    No *novo = criar_no(valor);
    if (novo == NULL){
        return head;
    }
    if (head == NULL){ //  se a lista vazia!!
        imprimir_lista(novo);
        return novo;
    }
    // percorrer ate o fim da lista
    No *atual = head;
    while (atual->prox != NULL){
        atual = atual->prox;
    }
    atual->prox = novo;
    imprimir_lista(head);
    return head;
}

// remover do inicio
No * remover_inicio(No *head){
    if (head==NULL){ // teste se lista vazia
        return NULL;
    }
    No *tmp = head;
    head = head->prox;
    free(tmp);
    imprimir_lista(head);
    return head;
}

int main(){
    No *fila = NULL;
    // inserir no inicio
    fila = inserir_fim(fila, 100);
    fila = inserir_fim(fila, 200);
    fila = inserir_fim(fila, 300);
    fila = remover_inicio(fila);

    return 0;
}