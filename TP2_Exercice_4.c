#include <stdio.h>

void main(void)
{
    int annee = 0;
    int test = 1;
    printf("Entrez une annee.\n");
    do
    {
    scanf("%d", &annee);
    }while (annee >= 3999 || annee <= 1512);
    test = annee%4;
    if test == 0
    {
        printf("Elle est bissextile !");
    }
    else
    {
        printf("Elle n'est pas bissextile !");
    }
}
