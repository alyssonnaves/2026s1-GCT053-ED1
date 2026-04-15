#include <stdio.h>
#include <assert.h>

int soma(int a, int b){
    assert(a>=0);
    assert(b>=0);
    return a+b;
}

int main(){
    int resultado = soma(-4,8);
    printf("resultado = %d\n", resultado);
    return 0;
}