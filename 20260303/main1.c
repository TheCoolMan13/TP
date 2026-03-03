/*
Se citeste de la tastatura o matrice cu m linii si n coloane m,n<=10 .
Sa se determine elemntul maxim din matrice si pozitia sa
*/
// Cristian Micea

#include <stdio.h>

int main()
{
    int m , n , maxi = -1;
    int A[11][11];
    scanf("%d %d" , &m , &n);
    for(int i = 0 ; i < m ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            scanf("%d" , &A[i][j]);
            if(A[i][j] > maxi)
            {
                maxi = A[i][j];
            }
        }
    }
    
    printf("%d" , maxi);
    // asume all val

}