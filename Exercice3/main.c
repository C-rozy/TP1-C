#include <stdio.h>
#include <stdlib.h>

int main()
{
    float note = 64;
    printf("Donne moi ta moyenne au bac ");
    scanf("%f",&note);
    if (note <8 && note >=0)
    {
        printf("Ajourné");
    }
    else if (note <10 && note >=8)
    {
        printf("Ajourné - Oral de rattrapage disponible");
    }
    else if (note <12 && note >=10)
    {
        printf("Passable");
    }
    else if (note <14 && note >=12)
    {
        printf("Mention assez bien");
    }
    else if (note <16 && note >=14)
    {
        printf("Mention bien");
    }
    else if (note <18 && note >=16)
    {
        printf("Mention très bien");
    }
    else if (note <=20 && note >=18)
    {
        printf("Mention très bien avec félicitations du jury");
    }
    else
    {
        printf("Invalide");
    }
    return 0;
}
