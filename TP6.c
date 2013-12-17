#include <stdio.h>
#define MAX 10

//Prototype des fonctions
void multiple(int matrice[MAX][MAX], int ligne, int colonne);
void parite(int matrice[MAX][MAX], int ligne, int colonne);
int booleen(int matrice[MAX][MAX], int ligne, int colonne);
int reflexive(int matrice[MAX][MAX], int ligne, int colonne);
int symetrique(int matrice[MAX][MAX], int ligne, int colonne);
int transitive(int matrice[MAX][MAX], int ligne, int colonne);

//Fonction principale
void main()
{
    int ligne=MAX, colonne=MAX;
    int matrice1[MAX][MAX], matrice2[MAX][MAX];
    int matrice3[MAX][MAX]={{1,0,0,0},{0,1,1,0},{1,0,1,0},{1,0,1,1}};
    multiple(matrice1, ligne, colonne);
    printf("\n\n\n");
    parite(matrice2, ligne, colonne);
    printf("\n");
    //Tests sur la première matrice, générée à partir de la fonction multiple.
    if(booleen(matrice1, ligne, colonne))
       printf("La matrice 1 est booleenne, ");
    else
       printf("La matrice 1 n'est pas booleenne, ");
    if(reflexive(matrice1, ligne, colonne))
       printf("reflexive, ");
    else
        printf("pas reflexive, ");
    if(symetrique(matrice1, ligne, colonne))
        printf("symetrique, ");
    else
        printf("antisymetrique, ");
    if(transitive(matrice1, ligne, colonne))
        printf("transitive, ");
    else
        printf("pas transitive, ");
    if(equivalence(matrice1, ligne, colonne))
        printf("equivalente, ");
    else
        printf("non equivalente, ");
    if(ordre(matrice1, ligne, colonne))
        printf("et a une relation d'ordre.\n\n");
    else
        printf("et n'a pas une relation d'ordre.\n\n");



    //Tests sur la matrice 2, générée à l'aide de la fonction parité.
    if(booleen(matrice2, ligne, colonne))
       printf("La matrice 2 est booleenne, ");
    else
        printf("La matrice 2 n'est pas booleenne, ");
    if(reflexive(matrice2, ligne, colonne))
       printf("reflexive, ");
    else
        printf("pas reflexive, ");
    if(symetrique(matrice2, ligne, colonne))
        printf("symetrique, ");
    else
        printf("antisymetrique, ");
    if(transitive(matrice2, ligne, colonne))
        printf("transitive, ");
    else
        printf("non transitive, ");
    if(equivalence(matrice2, ligne, colonne))
        printf("equivalente, ");
    else
        printf("non equivalente, ");
    if(ordre(matrice2, ligne, colonne))
        printf("et a une relation d'ordre.\n\n");
    else
        printf("et n'a pas une relation d'ordre.\n\n");



    //Tests sur la matrice 3 additionnelle donnée dans le contrat.
    if(booleen(matrice3, 4, 4))
       printf("La matrice 3 est booleenne, ");
    else
        printf("La matrice 3 n'est pas booleenne, ");
    if(reflexive(matrice3, 4, 4))
       printf("reflexive, ");
    else
        printf("reflexive, ");
    if(symetrique(matrice3, 4, 4))
        printf("symetrique, ");
    else
        printf("antisymetrique, ");
    if(transitive(matrice3, 4, 4))
        printf("transitive, ");
    else
        printf("non transitive, ");
    if(equivalence(matrice3, 4, 4))
        printf("equivalente, ");
    else
        printf("non equivalente, ");
    if(ordre(matrice3, 4, 4))
        printf("et a une relation d'ordre.\n");
    else
        printf("et n'a pas une relation d'ordre.\n");


}
//Genere une matrice de multiples
void multiple(int matrice[MAX][MAX], int ligne, int colonne)
{
    int i, j;
    for(i=0;i<ligne;i++)
    {
        for(j=0;j<colonne;j++)
        {
            if(i==0)
                matrice[i][j]=1;
            else if(j==0)
                matrice[i][j]=0;
            else if(i%j==0)
                matrice[i][j]=1;
            else
                matrice[i][j]=0;
            printf("%d",matrice[i][j]);
        }
        printf("\n");
    }
}
//Genere une matrice booléenne de parité
void parite(int matrice[MAX][MAX], int ligne, int colonne)
{
    int i, j;
    for(i=0;i<ligne;i++)
    {
        for(j=0;j<colonne;j++)
        {
            if(i%2==j%2)
                matrice[i][j]=1;
            else
                matrice[i][j]=0;
            printf("%d",matrice[i][j]);
        }
        printf("\n");
    }
}
//Vérifie si la matrice est booléenne
int booleen(int matrice[MAX][MAX], int ligne, int colonne)
{
    int i, j;
    for(i=0;i<ligne;i++)
    {
        for(j=0;j<colonne;j++)
        {
            if(matrice[i][j]!=1 && matrice[i][j]!=0)
                return 0;
        }
    }
    return 1;
}
//Vérifie si la matrice est reflexive
int reflexive(int matrice[MAX][MAX], int ligne, int colonne)
{
    int i,j;
    for(i=0,j=0;i<ligne;i++,j++)
    {
        if(matrice[i][j]!=1)
        return 0;
    }
    return 1;
}
//Vérifie si la matrice est symetrique
int symetrique(int matrice[MAX][MAX], int ligne, int colonne)
{
    int i,j;
    for(i=0;i<ligne;i++)
    {
        for(j=i;j<colonne;j++)
        {
            if(matrice[i][j] != matrice[j][i])
                return 0;
        }
    }
    return 1;
}
//Vérifie si la matrice est transitive (Si iRj et jRk, alors iRk)
int transitive(int matrice[MAX][MAX], int ligne, int colonne)
{
    int i, j, k;
    for(i=0;i<ligne;i++)
    {
        for(j=0;j<colonne;j++)
        {
            for(k=0;k<ligne;k++)
            {
                if(matrice[i][j]==matrice[j][k] && matrice[i][j]==1)
                {
                    if(matrice[i][k]!=1)
                        return 0;Lulunadipaelle
                }
            }
        }
    }
    return 1;
}
//Vérifie si elle est dans une relation d'équivalence
int equivalence(int matrice[MAX][MAX], int ligne, int colonne)
{
    if(transitive(matrice, ligne, colonne) && symetrique(matrice, ligne, colonne) && reflexive(matrice, ligne, colonne))
        return 1;
    return 0;
}
//Vérifie si elle est dans une relation d'ordre
int ordre(int matrice[MAX][MAX], int ligne, int colonne)
{
    if(transitive(matrice, ligne, colonne) && !(symetrique(matrice, ligne, colonne)) && reflexive(matrice, ligne, colonne))
        return 1;
    return 0;
}
