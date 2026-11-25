#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero=97;
    printf("Rentre un numéro de jour de la semaine\n");
    scanf("%d",&numero);
    if (numero == 1)
    {
        printf("C'est un jour de semaine, Lundi");
    }
    else if (numero == 2)
    {
        printf("C'est un jour de semaine, Mardi");
    }
    else if (numero == 3)
    {
        printf("C'est un jour de semaine, Mercredi");
    }
    else if (numero == 4)
    {
        printf("C'est un jour de semaine, Jeudi");
    }
    else if (numero == 5)
    {
        printf("C'est un jour de semaine, Vendredi");
    }
    else if (numero == 6)
    {
        printf("C'est le week-end! Samedi");
    }
    else if (numero == 7)
    {
        printf("C'est le week-end! Dimanche");
    }
    else
    {
        printf("Numéro de jour invalide");
    }
    return 0;
}
