#include<stdio.h>

int main(){
    int v[5] = {10,20,30,40,50};
    printf("endereco de v = %p\n", v);
    int *p = v;
    printf("ponteiro p = %p\n", p);
    printf("*(p+3) = %d\n", *(p+3));
    return 0;
}