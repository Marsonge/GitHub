#include <stdio.h>
#include <ctype.h>

// Prototype des fonctions
void tableCent (int);
int factorielle (int);
int anneeBissextile (int);
void nombreLettre (char);
int nombreSolution (int, int, int);
void secondeSuivante (int);

//Menu principal
void main(void)
{
    int choix;
    char choixProgChar = '#';
    do {
    int test;
    int choixProgram;
    int choixProgramA;
    int choixProgramB;
    printf("© Tim Industries ©\n");
    printf("Bienvenue sur TimIndustries 0.01.\n\n\n");
    printf("Pour profiter de nos services, veuillez faire un choix :\n\n\n");
    printf("1* Table de multiplication d'un entier.\n");
    printf("2* Factorielle d'un entier.\n");
    printf("3* Savoir les annees bissextiles.\n");
    printf("4* Afficher les chiffres en lettres.\n");
    printf("999* Quitter.\n");
    scanf("%d", &choix);
    switch (choix)
    {
    case 1 :
        printf("\n Veuillez indiquer l'entier :\n");
        scanf("%d", &choixProgram);
        tableCent(choixProgram);
        break;
    case 2 :
        printf("\n Veuillez indiquer l'entier :\n");
        scanf("%d", &choixProgram);
        test = factorielle(choixProgram);
        if (test == 0)
        {
            printf("La prochaine fois, ne rentrez pas n'importe quoi.\n\n\n");
        }
        else
        {
            printf("La factorielle de %d est %d.\n\n", choixProgram, factorielle(choixProgram));
        }
        break;
    case 3 :
        printf("\n Veuillez indiquer l'annee (entre 1512 et 3999):\n");
        scanf("%d", &choixProgram);
        test = anneeBissextile(choixProgram);
        switch (test)
        {
        case 1 :
            printf("Elle est bissextile !\n\n\n");
            break;
        case 0 :
            printf("Elle n'est pas bissextile !\n\n\n");
            break;
        case 99 :
            printf("La prochaine fois, ne rentrez pas n'importe quoi.\n\n\n");
        }
        break;
    case 4 :
        do
        {
            printf("\n\n Veuillez indiquer un chiffre :\n");
            scanf(" %c", &choixProgChar);
            nombreLettre(choixProgChar);
        }while(choixProgChar != '#');
        break;
    case 5 :
        printf("\n\n Veuillez indiquer les trois coefficients :\n");
        scanf("%d %d %d", &choixProgram, &choixProgramA, &choixProgramB);
        int test = nombreSolution(choixProgram, choixProgramA, choixProgramB);
        switch (test)
        {
        case 1 :
            printf("Cette equation a une solution.\n\n\n");
            break;
        case 0 :
            printf("Cette equation n'a pas de solution.\n\n\n");
            break;
        case 2 :
            printf("Cette equation a deux solutions.\n\n\n");
            break;
        case 99 :
            printf("Cette equation a une infinite de solutions.\n\n\n");
            break;
        default :
            printf("La prochaine fois, ne rentrez pas n'importe quoi.\n\n\n");
        }
        break;
    case 6 :
        printf("\n\n\n Veuillez entrer l'heure hhmmss :\n");
        scanf("%d", &choixProgram);
        secondeSuivante(choixProgram);
    case 999 :
        break;
    default :
        printf("Votre choix est incorrect.\n");
    }
}while (choix != 999);
}

//Fonction affichant la table de 100 d'un entier
void tableCent (int multiplier)
{
    int i;
    for (i=0;i<=100;i++)
    {
        printf("%d * %d = %d\n", multiplier, i, multiplier*i);
    }
    printf("\n\n\n");
}

//Fonction affichant la factorielle d'un entier
int factorielle (int entree)
{
    int i;
    int nombremod = 1;
    if (entree < 0)
    {
        printf("Erreur !\n");
        return 0;
    }
    if (entree == 0)
    {
        return 1;
    }
    else
    {
        for (i=1;i<=entree;i++)
        {
            nombremod = i*nombremod;
        }
        return nombremod;
    }

}

//Fonction donnant 1 si l'annee est bissextile et 0 si non. Il retourne 99 en cas d'erreur.
int anneeBissextile (int annee)
{
    int test = 1;
    if (annee >= 3999 || annee <= 1512)
    {
        printf("Erreur !\n");
        return 99;
    }
    test = annee%4;
    if (test == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


void nombreLettre(char chiffre)
{
    switch (chiffre)
    {
    case '1':
        printf("\nUN\n");
        break;
    case '2':
        printf("\nDEUX\n");
        break;
    case '3':
        printf("\nTROIS\n");
        break;
    case '4':
        printf("\nQUATRE\n");
        break;
    case '5':
        printf("\nCINQ\n");
        break;
    case '6':
        printf("\nSIX\n");
        break;
    case '7':
        printf("\nSEPT\n");
        break;
    case '8':
        printf("\nHUIT\n");
        break;
    case '9':
        printf("\nNEUF\n");
        break;
    case '0':
        printf("\nZERO\n");
        break;
    default:
        printf("\nErreur.\n");
    }
}

//Programme permettant de calculer le nombre de solutions pour un polynome du second degre
int nombreSolution (int a, int b, int c)
{
    float delta;

    delta = (b*b)-(4*a*c);
    if (c == 0 && a == 0 && b == 0)
    {
        return 99;
    }
    else if (b == 0)
    {
        return 0;
    }
    else if (a == 0)
    {
        return 1;
    }


    else if (delta < 0)

    {
        return 0;
    }
    else if (delta == 0)
    {
        return 1;
    }
    else if (delta > 0)
    {
        return 2;
    }
}

//Transforme hhmmss en hhmmss+1 en gardant le formatage.
void secondeSuivante(int heure)
{
    int heuretest;
    heuretest = heure%100;
    if (heuretest >= 60)
    {
        printf("Seconde");
        return 0;
    }
    heuretest = (heure/100)%100;
    if (heuretest >= 60)
    {
        printf("Minute");
        return 0;

    }
    heuretest = (heure/10000);
    if (heuretest >= 24)
    {
        printf("Heure");
        return 0;
    }
    heure++;
    if (heure >= 60)
    {
        heure = heure + 40;
    }
    heuretest = (heure/100)%100;
    if (heuretest >= 60)
    {
        heure = heure + 4000;
    }
    heuretest = (heure/10000);
    if (heuretest >= 24)
    {
        heure = heure - 240000;
    }
    printf("%d", heure);

}

