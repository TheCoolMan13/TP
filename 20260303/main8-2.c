/*
Subiect 8.2: Se citesc de la tastatură un număr n și o matrice pătratică de dimensiune n conținând litere din
alfabet. Pe urmă se citește de la tastatură un cuvânt. Verificați dacă respectivul cuvânt se poate construi
parcurgând literele matricii pe verticală în sus sau în jos sau pe orizontală spre stânga sau spre dreapta. Afișați
toate pozițiile de unde trebuie începută parcurgerea, precum și sensul de parcurgere necesar pentru a construi
cuvântul.
Spre exemplu, dacă de la tastatură se introduce:
5
e r e m a
h e r e b
b m e r e
b a m e r
a e m r e
mere
pe ecran se va afișa:
De la linia 0 coloana 3 spre stânga.
De la linia 0 coloana 3 în jos.
De la linia 2 coloana 1 spre dreapta.
De la linia 3 coloana 2 în sus.
Nu are importanță ordinea în care sunt afișate soluțiile găsite. Dacă nu există soluție, se afișează “Nu există
soluție”.
*/

#include <stdio.h>
#define MAX 100

int main()
{
    int n;
    char A[MAX][MAX];
    char word[MAX];

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf(" %c", &A[i][j]);

    scanf("%s", word);

    // Verificare parcurgere
    int found = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            // Verificare spre dreapta
            int k;
            for (k = 0; word[k] && A[i][j + k] == word[k]; k++);
            if (!word[k])
            {
                printf("De la linia %d coloana %d spre dreapta.\n", i, j);
                found = 1;
            }

            // Verificare spre stânga
            for (k = 0; word[k] && A[i][j - k] == word[k]; k++);
            if (!word[k])
            {
                printf("De la linia %d coloana %d spre stanga.\n", i, j);
                found = 1;
            }

            // Verificare în jos
            for (k = 0; word[k] && A[i + k][j] == word[k]; k++);
            if (!word[k])
            {
                printf("De la linia %d coloana %d in jos.\n", i, j);
                found = 1;
            }

            // Verificare în sus
            for (k = 0; word[k] && A[i - k][j] == word[k]; k++);
            if (!word[k])
            {
                printf("De la linia %d coloana %d in sus.\n", i, j);
                found = 1;
            }
        }

    if (!found)
        printf("Nu există soluție");

    return 0;
}