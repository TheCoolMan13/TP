/*
Se citesc m si n se aloca dinamic o matrice A(m * n) apoi se aloca dinamic doi vectori
Slin[m] si Scol[n], Sa se calculeze sumele pe linii in Slin si sumele pe coloanele
din Scol aopi sa se afiseze cei doi vectori
*/

#include <stdio.h>

int main()
{
    int m , n;
    scanf("%d%d" , &m , &n);
    int **A = malloc( m * sizeof(int));
    for(int i = 0 ; i < n ; i++)
    {
        *(A+i) = malloc(n * sizeof(int));
    }
}