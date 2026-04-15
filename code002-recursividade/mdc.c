#include <stdio.h>
int mdc(int a, int b){
    int resto = a%b;
    if (resto == 0){
        return b;
    }else{
        return mdc(b, resto); // aqui ta a chamada recursiva
    }
}

int main(){
    int result = mdc(252,105);
    printf("mdc entre 252 e 105 = %d\n", result);
    return  0;
}