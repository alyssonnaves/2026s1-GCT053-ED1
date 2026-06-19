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
