#include<stdio.h>

int fibonacci(int n){
    if (n <= 2){ // caso base
        return 1;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    int fib = fibonacci(17);
    printf("fibonacci de 17 = %d\n", fib);
    for (int i = 1; i <= 20; i++)
    {
        int valor = fibonacci(i);
        printf("%d->",valor);
    }
    printf("\n");    
    return 0;
}