#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A = 6.54;
    float B = 4.2;
    char C = 'a';
    float D = 42.9;
    printf("Donne un calcul sous la forme nombre -> opérateur -> nombre\n");
    scanf("%f %c %f", &A, &C, &B);
    if (C == '+')
    {
        D = A + B;
    }
    else
    {
        if (C == '*')
        {
            D = A * B;
        }
        else
        {
            if (C == '-')
            {
                D = A - B;
            }
            else
            {
                if (C == '/')
                {
                    D = A / B;
                }
                else
                {
                    D = 0;
                }
            }
        }
    }
    if (D != 0)
    {
        printf("Ton calcul donne : %f", D);
    }
    else
    {
        printf("Erreur");
    }
    return 0;
}
