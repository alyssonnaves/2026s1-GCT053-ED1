#include<stdio.h>

void inc(int x){
    x=x+1;
    printf("endereco x = %p\n", &x);
    printf("inc x = %d\n", x);
}

void inc_ref(int *p){
    *p = *p + 1;
    printf("endereco p = %p\n", p);
    printf("inc ref *p = %d\n", *p);
}

int main(){
    int a = 10;
    printf("endereco de a = %p\n", &a);
    // inc(a);
    inc_ref(&a);
    printf("a = %d\n", a); // 10
    return 0;
}