#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#define NB_ELEMENTS 20

// Prototype des fonctions
void valeur_alea(int *, int);
void afficher_valeur(int *, int);
void afficher_envers(int *, int);
void inverser_tableau (int *, int);
int tableau_maxi (int *, int);
void tableau_maximini(int *, int, int *);
void deux_plus_grandes (int *, int);
void ordre_croissant (int *, int);
//Menu principal
void main(void)
{
    int tableau[NB_ELEMENTS];
    int tableaumin[2];
    int choix;
    do {
    printf("© Tim Industries ©\n");
    printf("Bienvenue sur TimIndustries 1.0.t.\n\n\n");
    printf("Pour profiter de nos services, veuillez faire un choix :\n\n\n");
    printf("1* Remplir le tableau aleatoirement.\n");
    printf("2* Afficher le tableau d'entiers.\n");
    printf("3* Afficher le tableau a l'envers.\n");
    printf("4* Inverser les valeurs du tableau.\n");
    printf("5* Afficher la valeur maximale du tableau.\n");
    printf("6* Afficher les extremas du tableau.\n");
    printf("7* Affiche les deux plus grandes valeurs.\n");
    printf("8* Trie le tableau par ordre croissant.\n");
    printf("999* Quitter.\n");
    scanf("%d", &choix);
    switch (choix)
    {
    case 1 :
        valeur_alea(tableau, NB_ELEMENTS);
        break;
    case 2 :
        afficher_valeur(tableau, NB_ELEMENTS);
        break;
    case 3 :
        afficher_envers(tableau, NB_ELEMENTS);
        break;
    case 4 :
        inverser_tableau(tableau, NB_ELEMENTS);
        break;
    case 5 :
        printf("\nLe maximum est de %d.\n", tableau_maxi(tableau, NB_ELEMENTS));
        break;
    case 6 :
        tableau_maximini(tableau, NB_ELEMENTS, tableaumin);
        break;
    case 7 :
        deux_plus_grandes(tableau, NB_ELEMENTS);
        break;
    case 8 :
        ordre_croissant(tableau, NB_ELEMENTS);
        break;
    case 42 :
        printf("\n42, 42, la reponse est 42 !\n\n");
        break;
    case 999 :
        break;
    default :
        printf("Votre choix est incorrect.\n\n");
    }
}while (choix != 999);
}


//Remplit le tableau de valeurs aleas entre -9 et 99
void valeur_alea(int *tab,int taille_tab)
{
    srand(time(NULL));
    int i;
    for (i = 0;i<taille_tab;i++)
    {
        tab[i]=(rand()%108)-9;
    }
    /* Pour tester, decommenter ça :
    for (i = 0;i<taille_tab;i++)
    {
        printf("%d\n", tab[i]);
    }
    */
}
//Affiche le tableau
void afficher_valeur(int *tab,int taille_tab)
{
    printf("\n");
    int i = 0;
    for (i = 0;i<taille_tab;i++)
    {
        printf("%d  ", tab[i]);
    }
    printf("\n");
}
//Affiche le tableau a l'envers
void afficher_envers(int *tab, int taille_tab)
{
    printf("\n");
    int i;
    for (i = taille_tab-1;i>=0;i--)
    {
        printf("%d  ", tab[i]);
    }
    printf("\n");
}

//Inverse le tableau (tab[0] devient tab[taille_tab-1]
void inverser_tableau (int *tab, int taille_tab)
{
    int tableau[taille_tab];
    int i, j;
    for (i = 0;i<taille_tab;i++)
    {
        j = taille_tab - 1 - i;
        tableau[j] = tab[i];
    }
    for (i = 0;i<taille_tab;i++)
    {
        tab[i]=tableau[i];
    }
}
int tableau_maxi (int *tab, int taille_tab)
{
    int maxi = -9, i;
    for (i = 0;i<taille_tab;i++)
    {
        if (tab[i] > maxi)
        {
            maxi = tab[i];
        }
    }
    return maxi;
}
void tableau_maximini (int *tab, int taille_tab, int *returner)
{
    int maxi = -9, i, mini = 99;
    for (i = 0;i<taille_tab;i++)
    {
        if (tab[i] > maxi)
        {
            maxi = tab[i];
        }
        if (tab[i] < mini)
        {
            mini = tab[i];
        }
    }
    printf("Le maximum est %d et le minimum %d.\n\n", maxi, mini);
    /* VARIANTE :

    returner[0] = maxi;
    returner[1] = mini;
    */
}
void deux_plus_grandes (int *tableau, int nombre_tab)
{
    int maxi1 = -9, maxi2 = -9, i;
    for (i = 0;i<nombre_tab;i++)
    {
        if (tableau[i] > maxi1 && maxi2)
        {
            maxi1 = tableau[i];
        }
        else if (tableau[i] > maxi2)
        {
            maxi2 = tableau[i];
        }
    }
    printf("%d et %d", maxi1, maxi2);
}

void ordre_croissant(int *tableau, int nombre_tab)
{
    int indicemax, tablecroissant[nombre_tab];
    int i, mini = 99;
    int j;
    for (j = 0;j<nombre_tab;j++)
    {
        mini = 99;
        for (i = 0;i<nombre_tab;i++)
        {

            if (tableau[i] < mini)
            {
                mini = tableau[i];
                indicemax = i;
            }
        }
        tablecroissant[j] = tableau[indicemax];
        tableau[indicemax]=99;

    }
    for (i = 0;i<nombre_tab;i++)
    {
        tableau[i] = tablecroissant[i];
    }

}
