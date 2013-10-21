#include <stdio.h>

void main(void)
{

    int nombre, nombremod, i;
    nombremod = 1;
    printf("Saisir le nombre.\n");
    do
    {
        scanf("%d", &nombre);
    } while(nombre < 0);
    if (nombre == 0)
    {
        nombremod = 1;
    }
    else {
    for (i=1;i<=nombre;i++)
    {
        nombremod = i*nombremod;
    }

}
printf("%d", nombremod);
}
