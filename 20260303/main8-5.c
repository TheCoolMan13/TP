/*
Aplicația 8.5: Se citește de la tastatură o matrice cu n<=20 linii și coloane. 
Să se memoreze într-un vector suma
tuturor elementelor de pe fiecare linie și într-un alt vector, suma tuturor elementelor de pe fiecare coloană. 
Să se afișeze cei doi vectori. Se vor utiliza pointeri atât pentru vectori cât și pentru matrici.
*/

// #include <stdio.h>
// #define size 21
// int main()
// {
//     int n;
//     int A[size][size];
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             scanf("%d", &A[i][j]);
//         }
//     }
//     int Linii[size] , Coloana[size];

//     // construct line vector;
//     for(int i =  0 ; i < n ; i++)
//     {
//         for(int j = 0 ; j < n ; j++)
//         {
//             Linii[i] += A[i][j];
//         }
//     }

//     // construct column vector

//     for(int i = 0  ; i < n ; i++)
//     {
//         for(int j = 0 ; j < n ; j ++)
//         {
//             Coloana[i] += A[j][i];
//         }
//     }

//     for(int i =  0 ; i < n ; i++)
//     {
//         printf("%d " , Linii[i]);
//     }
//     printf("\n");
//     for(int i =  0 ; i < n ; i++)
//     {
//         printf("%d " , Coloana[i]);
//     }
// }

#include <stdio.h>
#define size 21

int main()
{
    int n;
    int A[size][size];

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    int Linii[size] = {0};
    int Coloana[size] = {0};

    int (*pA)[size] = A;

    int *pL = Linii;
    int *pC = Coloana;

    // suma pe linii
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            *(pL + i) += *(*(pA + i) + j);

    // suma pe coloane
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            *(pC + i) += *(*(pA + j) + i);

    for (int i = 0; i < n; i++)
        printf("%d ", *(pL + i));

    printf("\n");

    for (int i = 0; i < n; i++)
        printf("%d ", *(pC + i));

    return 0;
}