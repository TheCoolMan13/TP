/*
Aplicația 8.4: Se citește de la tastatură o matrice pătratică cu n<=50 linii și coloane. 
Să se interschimbe elementele
de deasupra diagonalei principale, considerată ca axă de simetrie, 
cu elementele de sub diagonala principală,
elementele de pe diagonala principală rămânând la fel. De exemplu matricea:
1 2 3
4 5 6
7 8 9
Va deveni:
1 4 7
2 5 8
3 6 9
*/
#include <stdio.h>
#define size 51
int main()
{
    int n;
    int A[size][size];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int temp = A[i][j];
            A[i][j] = A[j][i];
            A[j][i] = temp;
        }
    }


    for(int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }


    return 0;
}