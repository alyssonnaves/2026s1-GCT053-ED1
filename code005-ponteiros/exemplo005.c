#include <stdio.h>
#include "string.h"
typedef struct
{
    int matricula;
    char nome[30];
    float nota;
} Aluno;

void relatorio(Aluno *p){
    printf("===============================\n");
    printf("matricula = %d\n", p->matricula);
    printf("nome = %s\n", (*p).nome);
    printf("nota = %f\n", p->nota);
}

void aumentar_nota(Aluno *p, float delta){
    p->nota = p->nota + delta;
}

int* funcao(){
    int x = 9;
    printf("endereco de x = %p\n",&x);
    return &x;
}

int main()
{
    Aluno a1;
    a1.matricula = 123;
    strcpy(a1.nome,"Alan Turing");
    a1.nota = 9.5;

    Aluno a2;
    a2.matricula=234;
    strcpy(a2.nome, "Ada Lovelace");
    a2.nota = 10.0;
    printf("----a1----\n");
    printf("matricula a1 = %d\n", a1.matricula);
    printf("nome a1 = %s\n", a1.nome);
    printf("nota = %f\n", a1.nota);
    printf("----a2----\n");
    printf("matricula a2 = %d\n", a2.matricula);
    printf("nome a2 = %s\n", a2.nome);
    printf("nota = %f\n", a2.nota);

    Aluno a3 = {547, "Linus Torvalds", 8.9};
    printf("----a3----\n");
    printf("matricula a3 = %d\n", a3.matricula);
    printf("nome a3 = %s\n", a3.nome);
    printf("nota = %f\n", a3.nota);

    Aluno a4 = {.matricula=897,.nome="Tim Berners-Lee", .nota=10};
    // Aluno a4 = {0}; // inicializa vazio (0 pra campos numericos)
    printf("----a4----\n");
    printf("matricula a4 = %d\n", a4.matricula);
    printf("nome a4 = %s\n", a4.nome);
    printf("nota = %f\n", a4.nota);

    relatorio(&a1);
    aumentar_nota(&a1,0.2);
    relatorio(&a1);
    relatorio(&a4);

    printf("********************\n");
    Aluno turma[10];
    turma[0]=a1;
    turma[1]=a2;
    turma[2]=a3;
    turma[3]=a4;

    for(int i = 0; i<4; i++){
        Aluno tmp = turma[i];
        relatorio(&tmp);
    }


    Aluno aluno1;
    aluno1.matricula = 52;

    Aluno *ptr_aluno1 = &aluno1;
    ptr_aluno1->matricula = 55;

    printf("matricula %d\n", aluno1.matricula);
    printf("matricula %d\n", ptr_aluno1->matricula);
    printf("matricula %d\n", (*ptr_aluno1).matricula);

    Aluno *ptr_aluno_null = &aluno1;
    if(ptr_aluno_null != NULL){
        printf("matricula %d\n", ptr_aluno_null->matricula);
        printf("endereco do ponteiro null %p\n", ptr_aluno_null);
    }
    printf("-------------\n");
    int *ponteiro = funcao();
    printf("endereco de ponteiro = %p\n",ponteiro);
    return 0;
}

