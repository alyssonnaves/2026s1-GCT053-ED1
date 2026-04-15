#include<stdio.h>

// declarar as funcoes
int soma(int x, int y);
int w = 8;
int main(void){
    int a = 10, b = 25;
    int z = soma(a, b);
    printf("soma = %d\n", z);
    //printf("valor x %d", x); // x variavel local
    printf("valor w %d", w);
}

int soma(int a, int b){
    return a+b;
}

