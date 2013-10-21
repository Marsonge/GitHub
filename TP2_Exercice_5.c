#include <stdio.h>

void main(void)
{
    float moyenne1, moyenne2, moyenne3, moyenne;
    printf("Saisir les trois moyennes.\n");
    scanf("%f %f %f", &moyenne1, &moyenne2, &moyenne3);
    if (moyenne1 < moyenne2 && moyenne1 < moyenne3)
    {
        moyenne = (moyenne2 + moyenne3)/2;
        printf("%f", moyenne);
    }
    else if (moyenne2 < moyenne3 && moyenne2 < moyenne1)
    {
        moyenne = (moyenne2 + moyenne3)/2;
        printf("%f", moyenne);
    }
    else if (moyenne3 < moyenne1 && moyenne3 < moyenne2)
    {
        moyenne = (moyenne2 + moyenne3)/2;
        printf("%f", moyenne);
    }
    else
    {
        moyenne = (moyenne1 + moyenne2 + moyenne3)/3;
        printf("%f", moyenne);
    }
}
