#include <stdio.h>

void main(void)
{
    int date;
    printf("Saisir une date (jjmmaa) : \n");
    scanf("%d", &date);
    int annee = (date%100) + 2000;
    date = date / 100;
    int jours = date/100;
    printf("%d ", jours);
    switch (date%100)
    {
    case 1:
        printf("Janvier");
        break;
    case 2:
        printf("Fevrier");
        break;
    case 3:
        printf("Mars");
        break;
    case 4:
        printf("Avril");
        break;
    case 5:
        printf("Mai");
        break;
    case 6:
        printf("Juin");
        break;
    case 7:
        printf("Juillet");
        break;
    case 8:
        printf("Aout");
        break;
    case 9:
        printf("Septembre");
        break;
    case 10:
        printf("Octobre");
        break;
    case 11:
        printf("Novembre");
        break;
    case 12:
        printf("Decembre");
        break;
    }
    printf(" %d", annee);
}
