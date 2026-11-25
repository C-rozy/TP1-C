#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a = 0;
    float b = 0;
    printf("Saisir un nombre pour a: ");
    scanf("%f",&a);
    printf("Saisir un nombre pour b: ");
    scanf("%f",&b);
    float c = a - b;
    float d = b - a;
    if (c >= 0)
    {
        printf("Valeur absolue entre a et b: %f",c);
    }
    else
    {
        printf("Valeur absolue entre a et b: %f",d);
    }
    return 0;
}
//int age 18 est une variable type integer (entier) alors que float age 18 est une variable type float (décimale)
//char lettre 'A' est une variable de type char à un seul caractère alors que char lettre[] "A" est une variable char* qui peut accueillir d'autres caractères
//L'opérateur % dit "modulo" sert à voir le reste d'une division euclidienne (ecemple: 16 % 3 = 1 car 15 / 3 = 5 alors 16 / 3 = 5 et il reste 1)
//Avec int 10 / 3, le résultat est égal à 3 parce que c'est la partie entière de la division (division euclidienne)
//Avec float 10 / 3,000000 le résultat est égal à parce que c'est en décimal calculé en binaire
//Il est préférable de donner des noms explicites aux variables ppour pouvoir facilement exploiter le code (exemple: float x = 79.90 est plus complexe à retrouver que float prixHT = 79.90)
