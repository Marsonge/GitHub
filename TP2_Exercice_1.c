#include <stdio.h>
#include <ctype.h>
void main(void)
{
    // 1)
    /*
    int entier, table, i, k;
    printf("Saisir l'entier :\n");
    scanf("%d", &entier);
    for (k=0;k<=10;k++){
    if (isdigit(str[k]))
    continue;
    else
    goto end;
    }
    {
        for (i=0;i<=100;i++)
        {
            table = entier*i;
            printf("%d*%d=%d\n", entier, i, table);
        }
    }
*/
    //2)
    int entier, table, i, j;
    //printf("Saisir l'entier :\n");
    //scanf("%d", &entier);
    printf("*    1   2   3   4   5   6   7   8   9  10 \n");
    for (i=1;i<=10;i++)
    {
        printf("%2d", i);
        for (j=1;j<=10;j++)
        {
            table = i*j;
            printf (" %3d", table);
        }
        printf("\n");
    }
}
