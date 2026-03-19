#include <stdio.h>

void incrementa(int x){
    x = x+1;
    printf("valor de x %d\n", x);
}

int main(void){
    int a = 10;
    incrementa(a);
    printf("valor de a %d\n", a);
}