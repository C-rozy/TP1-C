#include <stdio.h>
#include <stdlib.h>

int main()
{
    float montant = 45.2;
    printf("Donne le montant de tes achats en euros ");
    scanf("%f",&montant);
    if (montant < 50)
    {
        printf("Pas de remise");
    }
    else if (montant >= 50 && montant <100)
    {
        printf("remise de 5%%\nPrix final : %.2f", montant * 1.05);
    }
    else if (montant >= 100 && montant <150)
    {
        printf("remise de 10%%\nPrix final : %.2f"), montant * 1.1;
    }
    else
    {
        printf("remise de 15%%\nPrix final : %.2f", montant * 1.15);
    }
    return 0;
}
