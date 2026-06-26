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
No* push(No *head, int valor){
    No *novo = criar_no(valor);
    if (novo == NULL){
        return head;
    }
    novo->prox = head;
    head = novo;
    imprimir_lista(head);
    return head;
}

// remover do inicio
No * pop(No *head){
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
    No *pilha = NULL;
    // inserir no inicio
    pilha = push(pilha, 30);
    pilha = push(pilha, 20);
    pilha = push(pilha, 10);
    pilha = pop(pilha);

    return 0;
}