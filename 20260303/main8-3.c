/*
Aplicația 8.3: Se citește de la tastatură un număr n<=10 și un număr m<=20.
 Se cere să se scrie un program care
generează o matrice cu m linii și n coloane în care sunt puse toate numerele de la 1,2,3,...,m*n. 
Se vor utiliza pointeri.
*/

#include <stdio.h>
#define MAX 21

int main()
{
    int m, n;
    int A[MAX][MAX];

    scanf("%d %d", &m, &n);

    int (*pA)[MAX] = A;   // pointer la matrice

    int val = 1;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            *(*(pA + i) + j) = val;
            val++;
        }
    }

    // afișare matrice
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", *(*(pA + i) + j));
        }
        printf("\n");
    }

    return 0;
}