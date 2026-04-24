
#include <stdio.h>

void imprime(int v[], int n);

void bubble_sort(int v[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (v[j] > v[j + 1])
            {
                // troca
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
            imprime(v, n);
        }
    }
}

//
void selection_sort(int v[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int m = i; // indice do menor em v[i..n-1]
        for (int j = i + 1; j < n; j++)
        {
            if (v[j] < v[m])    //  encontrar o menor elemento no vetor
                m = j;   // o indice do menor elemento encontrado
        }
        // troca no final do passo
        if (m != i)
        {
            int tmp = v[i];
            v[i] = v[m];
            v[m] = tmp;
        }
        imprime(v, n);
    }
}

void insertion_sort(int v[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int x = v[i]; // chave a inserir
        int j = i - 1;
        while (j >= 0 && v[j] > x)
        {
            v[j + 1] = v[j]; // desloca para a direita
            v[j] = x;
            j--;
            imprime(v, n);
        }
        //v[j + 1] = x; // insere na lacuna
        imprime(v, n);
    }
}



void imprime(int v[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main()
{
    int vetor[] = {9, 5, 6, 2, 1, 4, 7};
    int n = 7;

    imprime(vetor, n);

    insertion_sort(vetor, n);

    imprime(vetor, n);

    return 0;
}