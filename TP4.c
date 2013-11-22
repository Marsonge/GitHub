#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#define NB_ELEMENTS 20
#define MAXI 100
// Prototype des fonctions
void valeur_alea(int *, int, int *);
void afficher_valeur(int *, int);
void afficher_envers(int *, int);
void inverser_tableau (int *, int);
int tableau_maxi (int *, int);
void tableau_maximini(int *, int, int *);
void deux_plus_grandes (int *, int, int *);
void ordre_croissant (int *, int);
void tri_bulle (int *, int);
void tri_selectif (int *, int);
void tri_comptage (int *, int, int);

//Menu principal
void main(void)
{
    int tableau[NB_ELEMENTS];
    int tableauentier[NB_ELEMENTS];
    int tableaumin[2];
    char choix;
    // do {
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
    printf("9* 1 a 8 a la suite pour la correction.\n");
    printf("B* Trier le tableau (tri bulle).\n");
    printf("S* Trier le tableau (tri selectif).\n");
    printf("C* Trier le tableau (tri comptage).\n");
    printf("0* Quitter.\n");
    do {
    scanf("%s", &choix);
    switch (choix)
    {
    case '1' :
        valeur_alea(tableau, NB_ELEMENTS, tableauentier);
        break;
    case '2' :
        afficher_valeur(tableau, NB_ELEMENTS);
        system("pause");
        break;
    case '3' :
        afficher_envers(tableau, NB_ELEMENTS);
        system("pause");
        break;
    case '4' :
        inverser_tableau(tableau, NB_ELEMENTS);
        system("pause");
        break;
    case '5':
        printf("\nLe maximum est de %d.\n", tableau_maxi(tableau, NB_ELEMENTS));
        system("pause");
        break;
    case '6' :
        tableau_maximini(tableau, NB_ELEMENTS, tableaumin);
        system("pause");
        break;
    case '7' :
        deux_plus_grandes(tableau, NB_ELEMENTS, tableaumin);
        system("pause");
        break;
    case '8' :
        ordre_croissant(tableau, NB_ELEMENTS);
        break;
    case '9' :
        valeur_alea(tableau, NB_ELEMENTS, tableauentier);
        afficher_valeur(tableau, NB_ELEMENTS);
        afficher_envers(tableau, NB_ELEMENTS);
        inverser_tableau(tableau, NB_ELEMENTS);
        printf("\nLe maximum est de %d.\n", tableau_maxi(tableau, NB_ELEMENTS));
        tableau_maximini(tableau, NB_ELEMENTS, tableaumin);
        deux_plus_grandes(tableau, NB_ELEMENTS, tableaumin);
        ordre_croissant(tableau, NB_ELEMENTS);
        afficher_valeur(tableau, NB_ELEMENTS);
        system("pause");
        break;
    case 'B' :
        tri_bulle(tableau, NB_ELEMENTS);
        system("pause");
        break;
    case 'S' :
        tri_selectif(tableau, NB_ELEMENTS);
        system("pause");
        break;
    case 'C' :
        tri_comptage(tableauentier, NB_ELEMENTS, MAXI);
        system("pause");
        break;
    case '&' :
        printf("\n42, 42, la reponse est 42 !\n\n");
        system("pause");
        break;
    case '0' :
        break;
    default :
        printf("Votre choix est incorrect.\n\n");
        system("pause");
        break;
    }
}while (choix != '0');
}


//Remplit le tableau de valeurs aleas entre -9 et 99
void valeur_alea(int *tab,int taille_tab, int *tabentier)
{
    srand(time(NULL));
    int i;
    for (i = 0;i<taille_tab;i++)
    {
        tab[i]=(rand()%108)-9;
    }
    for (i = 0;i<taille_tab;i++)
    {
        tabentier[i]=(rand()%100);
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

//Retourne la valeur maximale
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

//Retourne la valeur max et mini
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


void deux_plus_grandes (int *tableau, int nombre_tab, int *returner)
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
    printf("%d et %d sont les valeurs les plus grandes.\n", maxi1, maxi2);

     /* VARIANTE :

    returner[0] = maxi1;
    returner[1] = maxi2;
    */
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

//Tri bulle
void tri_bulle(int *tab, int taille_tab)
{
    int i;
    int valeur;
    for (i = 0;i<taille_tab-1;i++)
    {
        if (tab[i]>tab[i+1])
        {
            valeur = tab[i];
            tab[i] = tab[i+1];
            tab[i+1] = valeur;
            i = -1;
        }
    }
}

//Tri selectif
void tri_selectif(int *tab, int taille_tab)
{
    int i, j;
    int valeur;
    int mini;
    int indicemini;
    for (j = 0;j<taille_tab-1;j++)
    {
        mini = tab[j];
        indicemini = j;
        for (i = j+1;i<taille_tab;i++)
        {
            if (tab[i] < mini)
            {
                mini = tab[i];
                indicemini = i;
            }
        }
        valeur = tab[j];
        tab[j] = tab[indicemini];
        tab[indicemini] = valeur;
    }

}
void tri_comptage(int *tab, int taille_tab, int MAX)
{
    int tableauB[MAX];
    int tableauC[taille_tab];
    int i, j, valeur;
    for (i=0;i<MAX;i++)
    {
        valeur = 0;
        for (j=0;j<taille_tab;j++)
        {
            if (tab[j] == i)
            {
                valeur++;
            }
        }
        tableauB[i]=valeur;
    }
    j = 0;
    for (i = 0;i<MAX;i++)
    {
        if (tableauB[i] != 0)
        {
            while (tableauB[i] != 0)
            {
                tableauC[j]=i;
                j++;
                tableauB[i] = tableauB[i] - 1;

            }
        }
    }

    for (i = 0;i<taille_tab;i++)
    {
        printf("%d ", tableauC[i]);
    }
    printf("\n");
}
