/*
Subiect 8.1: Se citesc de la tastatură două numere n și m, n>=m. Pe urmă se citesc două matrici pătratice de
dimensiuni n, respectiv m, conținând numere întregi. Afișați toate pozitiile unde a doua matrice apare în prima
matrice. Afișarea se va face pe ecran sub forma unor perechi de forma (linie, coloană). Dacă a doua matrice nu
apare în prima matrice, se va afișa textul “Nu apare”.
Spre exemplu dacă se introduce:
5 3
1 0 1 1 1
0 1 0 1 1
1 0 1 1 1
0 1 0 1 1
1 0 1 1 1
0 1 1
1 0 1
0 1 1
se va afișa pe ecran:
(0,1) (2,1)
*/

#include <stdio.h>
#define MAX 100
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int a[MAX][MAX], b[MAX][MAX];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);


    for (int i = 0; i < m; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &b[i][j]);


    int found = 0;
    for (int i = 0; i <= n - m; i++)
        for (int j = 0; j <= n - m; j++)
        {
            int match = 1;
            for (int x = 0; x < m; x++)
                for (int y = 0; y < m; y++)
                    if (a[i + x][j + y] != b[x][y])
                    {
                        match = 0;
                        break;
                    }
            if (match)
            {
                printf("(%d,%d) ", i, j);
                found = 1;
            }
        }
    
    if (!found)
        printf("Nu apare");
    
    return 0;
}