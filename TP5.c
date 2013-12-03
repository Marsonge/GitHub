#include <stdio.h>
#include <stdlib.h>


//Prototype des fonctions
int longueurchaine(char *);
void affiche_envers(char *);
char *copie(char *, char *);
char *concatenation(char *, char *);
char *retourne(char *);
void sapinbas(char *);
void sapinhaut(char *);
//Menu principal
void main(void)
{
    char yop[100];
    scanf("%[^\n]", &yop);
    sapinhaut(yop);
    sapinbas(yop);

    printf("\n\n");
    sapinbas(yop);
    sapinhaut(yop);

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
    int i = longueurchaine(chaine2);
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
    chaine[j+i]='\0';
    return chaine;
}
char *retourne(char *chaine)
{
    int i;
    char valeur;
    for(i=0;i<longueurchaine(chaine)/2;i++)
    {
        valeur = chaine[i];
        chaine[i]=chaine[longueurchaine(chaine)-1-i];
        chaine[longueurchaine(chaine)-1-i]=valeur;
    }
    return chaine;
}
void sapinbas(char *chaine)
{
    int i;
    char chaine5[longueurchaine(chaine)];
    copie(chaine5, chaine);

    for(i=0;i<longueurchaine(chaine)/2+1;i++)
    {
        printf("%s\n", chaine5);
        chaine5[i]=' ';
        chaine5[longueurchaine(chaine5)-1-i]=' ';
    }
}
void sapinhaut(char *chaine)
{
    int i, j;
    char chaine2[longueurchaine(chaine)];
    char chaine3[longueurchaine(chaine)];
    int y=0;
    for (j=0;j<longueurchaine(chaine)/2;j++)
    {
            copie(chaine3, chaine);
        for(i=0;i<(longueurchaine(chaine)/2-y);i++)
        {
            chaine3[i]=' ';
            chaine3[longueurchaine(chaine)-1-i]=' ';
        }
           printf("%s\n", chaine3);
           y++;
    }
        printf("%s\n", chaine);
}
