#include<stdio.h>

int main(){
    int vetor[5] = {10,20,30,40,50};

    printf("vetor: %p\n",vetor);
    printf("-----------------\n");
    for (int i = 0; i < 5; i++)
    {
        printf("vetor[%d] = %d\n", i, vetor[i]);
        printf("*(vetor+%d) = %d\n", i, *(vetor+i));
        printf("endereco de vetor[%d] = %p\n", i, &vetor[i]);
        printf("endereco de vetor[%d] = %p\n\n", i, vetor+i);
    }
    
    return 0;
}