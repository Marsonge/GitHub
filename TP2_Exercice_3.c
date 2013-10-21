#include <stdio.h>

void main(void)
{
//Initialisation des variables
int uN, vN, uNresult;
double vNresult;
//Affichages
for (uN=0;uN<=10;uN++)
    {
    uNresult = 3*uN + 5;
    printf("U(%d) = %d\n", uN, uNresult);
    }
for (vN=0;vN<=10;vN++)
    {
    vNresult = ((3.0*(vN*vN)+5))/((vN*vN*vN)+1); //Toujours mettre un reel quelque part !
    printf("V(%d) = %lf\n", vN, vNresult);
    }
}
