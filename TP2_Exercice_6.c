#include <stdio.h>

void main(void)
{
char chiffre;
do {
    printf("Ecrire un chiffre.\n");
    scanf("%c", &chiffre);

    switch (chiffre)
    {
    case '1':
        printf("UN\n");
        break;
    case '2':
        printf("DEUX\n");
        break;
    case '3':
        printf("TROIS\n");
        break;
    case '4':
        printf("QUATRE\n");
        break;
    case '5':
        printf("CINQ\n");
        break;
    case '6':
        printf("SIX\n");
        break;
    case '7':
        printf("SEPT\n");
        break;
    case '8':
        printf("HUIT\n");
        break;
    case '9':
        printf("NEUF\n");
        break;
    case '0':
        printf("ZERO\n");
        break;
    }


}while (chiffre != '#');}
