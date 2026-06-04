#include <stdio.h>

int main(){
    int a = 10;
    const int *p = &a;
    printf("a = %d\n", a);
    a = 11;
    printf("*p = %d\n", *p);
    int b = 12;
    p = &b;
    printf("endereco a %p\n", &a);
    printf("ponteiro p = %p\n", p);
    printf("*p = %d\n", *p);

    return 0;
}