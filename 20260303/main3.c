/*
Se citeste o matrice cu m linii si n coloane 
Sa se determine suma elemetelor aflate pe marginea matricii
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

    int sum = 0;

    // prima linie
    for (int j = 0; j < n; j++)
        sum += A[0][j];

    // ultima linie
    if (m > 1)
        for (int j = 0; j < n; j++)
            sum += A[m - 1][j];

    // prima coloană (fără colțuri)
    for (int i = 1; i < m - 1; i++)
        sum += A[i][0];

    // ultima coloană (fără colțuri)
    if (n > 1)
        for (int i = 1; i < m - 1; i++)
            sum += A[i][n - 1];

    printf("%d", sum);

    return 0;
}