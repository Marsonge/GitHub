#include <stdio.h>

void main(void)
{
//Initialisation des variables
int uN, vN;
double uNresult, vNresult;
//Affichages
for (uN=0;uN<=10;uN++)
    {
    uNresult = 3*uN + 5;
    printf("U(%d) = %lf\n", uN, uNresult);
    }
for (vN=0;vN<=10;vN++)
    {
    vNresult = ((3*(vN*vN)+5))/((vN*vN*vN)+1);
    printf("V(%d) = %lf\n", vN, vNresult);
    }
}
