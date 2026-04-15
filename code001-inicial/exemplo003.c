#include <stdio.h>

void incrementa(int *x, int y){
    *x = *x+1;
    printf("valor de x %d\n", *x);
    y = y + 1; 
}

int main(void){
    int a = 10;
    int b = 10;
    incrementa(&a, b);
    printf("valor de a %d\n", a);
    printf("valor de b %d\n", b);
}