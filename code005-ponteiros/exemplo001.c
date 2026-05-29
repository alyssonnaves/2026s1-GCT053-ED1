#include<stdio.h>

int main(){
    int x = 10;
    int *p = &x; // p é um ponteiro para um inteiro

    printf("Valor de x: %d\n", x); // Imprime o valor de x
    printf("Valor de *p: %d\n", *p);

    *p = 99;
    printf("x = %d\n", x);
    printf("p = %p\n", p);
    printf("&x = %p\n", &x);
    return 0;
   
}