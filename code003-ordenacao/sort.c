
#include <stdio.h>

void imprime(int v[], int n);

void bubble_sort(int v[], int n){
    for (int i = 0; i < n - 1 ; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            if (v[j] > v[j+1]){
                // troca
                int temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
            }
            imprime(v, n);
        }        
    }    
}

//
void selection_sort(int v[], int n){


}

void insertion_sort(int v[], int n){


}


void imprime(int v[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main(){
    int vetor[] = {9,5,6,2,1,4,7};
    int n = 7;
    
    imprime(vetor, n);

    bubble_sort(vetor, n);

    imprime(vetor, n);
    
    return 0;
}