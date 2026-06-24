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
    struct No *ant;
} No;


typedef struct ListaDupla
{
    No *head;       // head = inicio
    No *tail;       // tail = fim
    int tamanho;
} ListaDupla;

void criar_lista(ListaDupla *lista){
    if (lista == NULL){
        return;
    }
    lista->head = NULL;
    lista->tail = NULL;
    lista->tamanho = 0;

}

No *criar_no(int valor){
    No *novo = (No *)malloc(sizeof(No));
    if (novo == NULL) return NULL;
    novo->dado = valor;
    novo->ant = NULL;
    novo->prox = NULL;
    return novo;
}

int inserir_inicio(ListaDupla *lista, int valor){
    if (lista == NULL) return 0;
    No *novo = criar_no(valor);
    if (novo==NULL) return 0;  // 0 - falha
    if (lista->head == NULL){ // lista vazia
        lista->head = novo;
        lista->tail = novo;
    }else{
        novo->prox = lista->head;
        lista->head->ant = novo;
        lista->head = novo;
    }
    lista->tamanho++; // incrementa tamanho
    return 1; // 1 - sucesso
}

int inserir_fim(ListaDupla *lista, int valor){
    if (lista == NULL) return 0;
    No *novo = criar_no(valor);
    if (novo == NULL) return 0;
    if (lista->tail == NULL) { // lista vazia
        lista->head = novo;
        lista->tail = novo;
    }else{
        novo->ant = lista->tail;
        lista->tail->prox = novo;
        lista->tail = novo;
    }
    lista->tamanho++;
    return 1;
}

No* buscar(ListaDupla *lista, int valor){
    if(lista==NULL) return NULL;
    No *atual = lista->head;
    while (atual!=NULL){
        if (atual->dado == valor) return atual;
        atual = atual->prox;
    }
}

int inserir_depois(ListaDupla *lista, No *atual,int valor){
    if(atual == NULL) return 0;
    if(atual == lista->tail) return inserir_fim(lista,valor);
    No *novo = criar_no(valor);
    if (novo == NULL) return 0;
    novo->ant = atual;
    novo->prox = atual->prox;
    atual->prox->ant = novo;
    atual->prox = novo;
    lista->tamanho++;
    return 1;
}

void imprimir_frente(ListaDupla *lista){
    if (lista == NULL){
        return;
    }
    No *atual = lista->head;
    printf("Frente: ");
    while(atual!=NULL){
        printf("%d", atual->dado);
        printf("<->");
        atual = atual->prox;
    }
    printf("NULL\n");
}

int main(){
    ListaDupla lista;
    criar_lista(&lista);
    imprimir_frente(&lista);
    inserir_inicio(&lista, 2);
    imprimir_frente(&lista);
    inserir_inicio(&lista, 5);
    imprimir_frente(&lista);
    inserir_fim(&lista, 11);
    imprimir_frente(&lista);
    No *atual = buscar(&lista, 2);
    inserir_depois(&lista, atual, 9);
    imprimir_frente(&lista);
}
