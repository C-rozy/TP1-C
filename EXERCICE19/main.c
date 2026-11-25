#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    char rejouer = 'o';
    while (rejouer == 'o')
    {
        int a = 0;
        int b = 0;
        int c = 0;
        int d = 7;
        a = rand();
        b = a % 900 + 100;
        printf("Saisir un nombre entre 100 et 999 (vous avez 7 vies): ");
        scanf("%d",&c);
            while (d > 0){
                if (c == b){
                    printf("Bravo tu as trouvé %d\n",b);
                    break;
                }
                else if (c >= 100 && c <= 999 && c > b){
                    d--;
                    if (d == 0) break;
                    printf("Trop grand\nSaisir un nombre entre 100 et 999 (vous avez %d vies): ",d);
                    scanf("%d",&c);
                }
                else if (c >= 100 && c <= 999 && c < b){
                    d--;
                    if (d == 0) break;
                    printf("Trop petit\nSaisir un nombre entre 100 et 999 (vous avez %d vies): ",d);
                    scanf("%d",&c);
                }
                else{
                    printf("Nombre invalide, pas de vies perdues.\nSaisir un nombre entre 100 et 999 : ");
                    scanf("%d",&c);
                }
            }
            if (d == 0){
                printf("Tu n'as plus de vies\nGame Over\n");
            }
            printf("Veux-tu rejouer ? (o/n) : ");
            scanf(" %c", &rejouer);
    }
    return 0;
}
