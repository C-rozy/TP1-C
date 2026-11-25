#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int nbr = 0;
    printf("Saisissez un nombre entier");
    scanf("%d",&nbr);
    if (nbr % 2 == 0)
    {
        if (nbr % 3 == 0 && nbr % 5 == 0)
        {
            printf("Ton nombre %d est pair et divisible par 3 et par 5",nbr);
        }
        else if (nbr % 3 == 0)
        {
            printf("Ton nombre %d est pair divisible par 3",nbr);
        }
        else
        {
            printf("Ton nombre %d est pair");
        }
    }
    else
    {
        if (nbr % 3 == 0 && nbr % 5 == 0)
        {
            printf("Ton nombre %d est impair et divisible par 3 et par 5",nbr);
        }
        else if (nbr % 3 == 0)
        {
            printf("Ton nombre %d est impair et divisible par 3",nbr);
        }
        else
        {
            printf("Ton nombre %d est impair",nbr);
        }
    }
    return 0;
}
