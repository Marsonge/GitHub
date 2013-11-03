#include <stdio.h>

void main(void)
{
    int i, j, k, nombreChoisi;
    int nombrePieces, nombrePiece, nombre = 0;
    /*printf("Saisir nombre.");
    scanf("%d", &nombre);
    for (i=nombre/5; i>=0;i--)
    {
        for (j=0;j<=nombre/2;j++)
        {
            for (k=0;k<=nombre;k++)
            {

            }
        }
    }
    */
    /* while (nombreBillet >=0)
    {
        nombre= nombreBillet*5;
        nombrePieces=0;
        while (nombre < 20)
        {
            nombre = nombre + nombrePieces;
            nombrePieces = nombrePieces + 2;
        }
        if (nombre ==20)
        {
            printf("On peut decomposer ca en %d billets et %d pieces. \n", nombreBillet, nombrePieces);
        }
        nombreBillet--;
    } */
    scanf ("%d", &nombreChoisi);
    int nombreBillet = (nombreChoisi/4);
    while (nombreBillet >= 0)
    {
        nombre = nombreBillet*5;
        nombrePieces=0;
    while (nombre < nombreChoisi)
    {

        nombre = nombre + nombrePieces;
        nombrePiece=0;
        while (nombre < nombreChoisi)
        {
            nombre = nombre + nombrePiece;
        }
        if (nombre == nombreChoisi)
        {
            printf("On peut decomposer ca en %d billets et %d pieces et en %d petites pieces. \n", nombreBillet, nombrePieces, nombrePiece);
        }
        nombrePieces = nombrePieces*2;
    }
    if (nombre == nombreChoisi)
        {
            printf("On peut decomposer ca en %d billets et %d pieces et en %d petites pieces. \n", nombreBillet, nombrePieces, nombrePiece);
        }
    nombreBillet--;
    }
}
