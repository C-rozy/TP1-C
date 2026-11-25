#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 45;
    char carte = 'n';
    int jour = 5;
    printf("Donne ton âge : ");
    scanf("%d",&age);
    printf("As-tu une carte étudiante? (o/n) : ");
    scanf(" %c",&carte);
    printf("Donne le jour (1 à 7) : ");
    scanf("%d",&jour);
    if (age < 12 && age >= 0)
    {
        if (carte == 'n' || carte == 'o')
        {
            if (jour == 3)
            {
                printf("Âge : %d\nCarte étudiant (o/n) : %c\nJour : %d\n\nTarif : 5,5 €\nRéduction du mercredi : -1,5 €\nPrix à payer : 4 €", age, carte, jour);
            }
            else if (jour == 1 || jour == 2 || jour == 4 || jour == 5 || jour == 6 || jour == 7)
            {
                printf("Âge : %d\nCarte étudiant (o/n) : %c\nJour : %d\n\nTarif : 5,5 €\nPrix à payer : 5,5 €", age, carte, jour);
            }
            else
            {
                printf("Erreur de saisie du jour");
            }
        }
        else
        {
            printf("Erreur d'entrée sur la carte étudiant");
        }
    }
    else if (age >= 65)
    {
        if (carte == 'n' || carte == 'o')
        {
            if (jour == 3)
            {
                printf("Âge : %d\nCarte étudiant (o/n) : %c\nJour : %d\n\nTarif : 8 €\nRéduction du mercredi : -1,5 €\nPrix à payer : 6,5 €", age, carte, jour);
            }
            else if (jour == 1 || jour == 2 || jour == 4 || jour == 5 || jour == 6 || jour == 7)
            {
                printf("Âge : %d\nCarte étudiant (o/n) : %c\nJour : %d\n\nTarif : 8 €\nPrix à payer : 8 €", age, carte, jour);
            }
            else
            {
                printf("Erreur de saisie du jour");
            }
        }
        else
        {
            printf("Erreur d'entrée sur la carte étudiant");
        }
    }
    else if (age >=12 && age <=64)
    {
        if (carte == 'n')
        {
            if (jour == 3)
            {
                printf("Âge : %d\nCarte étudiant (o/n) : %c\nJour : %d\n\nTarif : 10 €\nRéduction du mercredi : -1,5 €\nPrix à payer : 8,5 €", age, carte, jour);
            }
            else if (jour == 1 || jour == 2 || jour == 4 || jour == 5 || jour == 6 || jour == 7)
            {
                printf("Âge : %d\nCarte étudiant (o/n) : %c\nJour : %d\n\nTarif : 10 €\nPrix à payer : 10 €", age, carte, jour);
            }
            else
            {
                printf("Erreur de saisie du jour");
            }
        }
        else if (carte == 'o')
        {
            if (jour == 3)
            {
                printf("Âge : %d\nCarte étudiant (o/n) : %c\nJour : %d\n\nTarif : 7,5 €\nRéduction du mercredi : -1,5 €\nPrix à payer : 6 €", age, carte, jour);
            }
            else if (jour == 1 || jour == 2 || jour == 4 || jour == 5 || jour == 6 || jour == 7)
            {
                printf("Âge : %d\nCarte étudiant (o/n) : %c\nJour : %d\n\nTarif : 7,5 €\nPrix à payer : 7,5 €", age, carte, jour);
            }
            else
            {
                printf("Erreur de saisie du jour");
            }
        }
        else
        {
            printf("Erreur d'entrée sur la carte étudiant");
        }
    }
    else
    {
        printf("Erreur lors de la saisie de l'âge");
    }
    return 0;
}
