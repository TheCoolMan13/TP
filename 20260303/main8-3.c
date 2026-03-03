/*
Aplicația 8.3: Se citește de la tastatură un număr n<=10 și un număr m<=20.
 Se cere să se scrie un program care
generează o matrice cu m linii și n coloane în care sunt puse toate numerele de la 1,2,3,...,m*n. 
Se vor utiliza pointeri.
*/

#include <stdio.h>

int main()
{
    int m, n;
    int A[11][11];
    scanf("%d %d", &m, &n);

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    
}