#include <stdio.h>

void main(void)
{
    int date, moisTest;
    printf("Saisir une date (jjmmaa) : \n");
    scanf("%d", &date);
    int annee = (date%100) + 2000;
    date = date / 100;
    int jours = date/100;
    moisTest = date%100;
    switch (moisTest)
    {
        case 1:
        if (jours > 31 || jours < 0)
    {
        printf("Le nombre de jours est errone.\n");
        jours = 00;
    }
        break;
    case 2:
        if (jours > 29 || jours < 0)
    {
        printf("Le nombre de jours est errone.\n");
        jours = 00;
    }
        break;
    case 3:
        if (jours > 31 || jours < 0)
    {
        printf("Le nombre de jours est errone.\n");
        jours = 00;
    }
        break;
    case 4:
        if (jours > 30 || jours < 0)
    {
        printf("Le nombre de jours est errone.\n");
        jours = 00;
    }
        break;
    case 5:
        if (jours > 31 || jours < 0)
    {
        printf("Le nombre de jours est errone.\n");
        jours = 00;
    }
        break;
    case 6:
        if (jours > 30 || jours < 0)
    {
        printf("Le nombre de jours est errone.\n");
        jours = 00;
    }
        break;
    case 7:
        if (jours > 31 || jours < 0)
    {
        printf("Le nombre de jours est errone.\n");
        jours = 00;
    }
        break;
    case 8:
        if (jours > 31 || jours < 0)
    {
        printf("Le nombre de jours est errone.\n");
        jours = 00;
    }
        break;
    case 9:
        if (jours > 30 || jours < 0)
    {
        printf("Le nombre de jours est errone.\n");
        jours = 00;
    }
        break;
    case 10:
        if (jours > 31 || jours < 0)
    {
        printf("Le nombre de jours est errone.\n");
        jours = 00;
    }
        break;
    case 11:
        if (jours > 30 || jours < 0)
    {
        printf("Le nombre de jours est errone.\n");
        jours = 00;
    }
        break;
    case 12:
        if (jours > 31 || jours < 0)
    {
        printf("Le nombre de jours est errone.\n");
        jours = 00;
    }
        break;
    default:
        printf("Erreur, le mois est inconnu.");
    }
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
    default:
        printf("Erreur, le mois est inconnu.");
    }
    printf(" %d", annee);
}
