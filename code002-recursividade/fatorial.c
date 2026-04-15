#include <stdio.h>


long long fatorial(long n){
    // caso base
    if (n == 0){
        return 1;
    }
    return n*fatorial(n-1);
}

long long fatorial_iterativo(long n){
    long fat = 1;
    for (int i = 1; i <=n; i++)
    {
        fat = fat*i;
    }
    return fat;
    
}

int main(){
    long long fat7 = fatorial(7);
    printf("7! = %ld\n", fat7);
    long long fat7_it = fatorial_iterativo(7);
    printf("7! = %ld\n", fat7_it);
}