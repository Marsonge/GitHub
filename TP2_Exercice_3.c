#include <stdio.h>

void main(void)
{
//Initialisation des variables
int uN, vN, uNresult;
int uNsomme = 0;
double vNresult;
double vNsomme = 0.0;
//Affichages
for (uN=0;uN<=10;uN++)
    {
    uNresult = 3*uN + 5;
    printf("U(%d) = %d\n", uN, uNresult);
    //Si l'on veut calculer la somme, utiliser le code suivant :
    /*
    uNsomme = uNsomme + uNresult; */
    }
    //Pour son affichage :
    /*
    printf("La somme des termes : %d", uNsomme); */
for (vN=0;vN<=10;vN++)
    {
    vNresult = ((3.0*(vN*vN)+5))/((vN*vN*vN)+1); //Toujours mettre un reel quelque part !
    printf("V(%d) = %lf\n", vN, vNresult);
    //Si l'on veut calculer la somme, utiliser le code suivant :
    /*
    vNsomme = vNsomme + vNresult; */
    }
     //Pour son affichage :
    /*
    printf("La somme des termes : %lf", vNsomme); */
}
