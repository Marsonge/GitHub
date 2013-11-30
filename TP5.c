#include <stdio.h>
#include <stdlib.h>


//Prototype des fonctions
int longueurchaine(char *);
void affiche_envers(char *);
char *copie(char *, char *);
char *concatenation(char *, char *);
//Menu principal
void main(void)
{
    char yop[100]="Hello!";
    char yopo[100]="world!";
    affiche_envers(yop);
    printf("%s", concatenation(yop, yopo));
}
int longueurchaine(char *chaine)
{
    int i=0;
    while (chaine[i] != '\0')
    {
        i++;
    }
    return i;
}
void affiche_envers(char *chaine)
{
    int i = longueurchaine(chaine)-1;
    while (i >= 0)
    {
        printf("%c", chaine[i]);
        i--;
    }
}
char *copie(char *chaine, char *chaine2)
{
    int i = longueurchaine(chaine2)-1;
    for (i;i>=0;i--)
    {
        chaine[i] = chaine2[i];
    }
    return chaine;
}
char *concatenation(char *chaine, char *chaine2)
{
    int i = 0;
    int j = longueurchaine(chaine);
    while (chaine2[i] != '\0')
    {
        chaine[j+i] = chaine2[i];
        i++;
    }
    return chaine;
}
