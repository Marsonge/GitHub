#include <stdio.h>

void main(void)
{
float a, b, c, delta, xUn, xDeux;
printf("Veuillez saisir a, b, et c.\n");
scanf("%f %f %f", &a, &b, &c);

delta = (b*b)-(4*a*c);
if (c == 0 && a == 0 && b == 0)
    {
        printf("Il existe une infinite de solutions.");
    }
else if (b == 0)
{
printf("Il n'existe pas de solution.");
}
else if (a == 0)
{
    xUn = c/b;
    printf("Il existe une solution : %f", xUn);
}


else if (delta < 0)

    {
        printf("Il n'existe pas de solution.");
    }
    else if (delta == 0)
    {
        xUn = (-b)/(2.0*a);
        printf("Il existe une solution : %f", xUn);
    }
    else if (delta > 0)
    {
        xUn = (-b-(sqrt(delta)))/(2.0*a);
        xDeux = (-b+(sqrt(delta)))/(2.0*a);
        printf("Il existe deux solution : %f et %f", xUn, xDeux);

    }
}
