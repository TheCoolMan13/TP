/*
Se citeste o matrice patratica de ordin n <10 
Sa se afiseze elementele de pe diagonala secundara 
*/

#include <stdio.h>

int main()
{
    int n;
    int A[11][11];
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    for(int i = 0 ; i < n ; i++)
    {
        printf("%d " , A[i][i]);
    }

    //printf("%d", maxi);
    // asume all val

}