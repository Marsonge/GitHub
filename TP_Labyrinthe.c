#define N 4
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
typedef int Plateau [2*N+1][2*N+1];

/* Cases non atteignables dans la figure 1 :    P[7][3], P[5][3], P[7][5] P[3][7]*/
//Prototype des fonctions
void Initialision(Plateau);
void Affichage(Plateau);
void CreationAmateur(Plateau);
int DansPlateau(int, int);
void CreationProfessionnel(Plateau);
void InitDecouverte(Plateau, int, int);
void Visiter(Plateau, int, int);

//Programme principal
void main(void)
{
     srand(time(NULL));
     Plateau plato;
     Initialisation(plato);
     CreationAmateur(plato);
     Affichage(plato);
     printf("\n");
     Initialisation(plato);
     CreationProfessionnel(plato);
     Affichage(plato);
}

void Initialisation(Plateau P)
{
    int i,j;
    for (i=0;i<2*N+1;i++)
    {
        for (j=0;j<2*N+1;j++)
        {
            if ((j%2!=0) && (i%2!=0))
            {
                P[i][j]=0;
            }
            else
            {
                P[i][j]=1;
            }
        }
    }
}
void Affichage(Plateau P)
{
    int i,j;
    for (j=0;j<2*N+1;j++)
    {
        for (i=0;i<2*N+1;i++)
        {
            if (P[i][j]==1)
            {
                printf("#");
            }
            else if (P[i][j]==9)
            {
                printf("/");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");
}
void CreationAmateur(Plateau P)
{
    int i = 0;
    int j = 0;
    int compteur = N*N-1;
    while (compteur >= 0)
    {
        i = rand()%(2*N);
        j = rand()%(2*N);
        if ((i+j)%2!=0 && P[i][j]==1)
        {
            P[i][j]=9;
            compteur--;
        }

    }

}
//Return 1 si P[i,j] est hors des bords du tableau
int DansPlateau(int i, int j)
{
    if (i<=0 || j<=0 || i>=2*N|| j>=2*N)
    {
        return 0;
    }
    return 1;
}
void CreationProfessionnel(Plateau P)
{
    P[1][1]==2;
    int i = 1, j = 1;
    int nombrePortes = 0;
    int direction;
    while (nombrePortes <= (N*N-1))
    {
        direction = (rand()%4)+1; //Choisit une direction. 1 : Nord, 2 : Est, 3 : Ouest, 4 : Sud
        switch (direction)
        {
        case 1: //Nord
            if (DansPlateau(i,j-1)==1)
            {

                if (P[i][j-2]!=2)
                {
                    P[i][j-1]=9;
                    nombrePortes++;
                    P[i][j-2]=2;
                }
                j = j-2;
            }
            break;
        case 2: //Est
            if (DansPlateau(i+1,j)==1)
            {

                if (P[i+2][j]!=2)
                {
                    P[i+1][j]=9;
                    nombrePortes++;
                    P[i+2][j]=2;
                }
                i = i+2;
            }
            break;
        case 3: //Ouest

            if (DansPlateau(i-1,j)==1)
            {
                if (P[i-2][j]!=2)
                {
                    P[i-1][j]=9;
                    nombrePortes++;
                    P[i-2][j]=2;
                }
                i = i-2;
            }
            break;
        case 4: //Sud
            if (DansPlateau(i,j+1)==1)
            {

                if (P[i][j+2]!=2)
                {
                    P[i][j+1]=9;
                    nombrePortes++;
                    P[i][j+2]=2;
                }
                j = j+2;
            }
            break;
        default:
            break;
        }

    }
}

void InitDecouverte(Plateau P, int x, int y)
{
    int i, j;
    for (i=0;i<2*N+1;i++)
    {
        for (j=0;j<2*N+1;j++)
        {
            if ((j%2!=0) && (i%2!=0))
            {
                P[i][j]=2;
            }
        }
    }
    P[x][y]=3;

}
void Visiter(Plateau P, int x, int y)
{

}
