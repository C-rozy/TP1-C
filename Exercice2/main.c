#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A = 42;
    int B = 69;
    printf("Donne moi un nombre A : ");
    scanf("%d",&A);
    printf("Donne moi un nombre B : ");
    scanf("%d",&B);
    if (A - B > 0)
    {
        printf("Ton nombre A %d est plus grand que ton nombre B %d", A, B);
    }
    else if (A - B < 0)
    {
        printf("Ton nombre B %d est plus grand que ton nombre A %d", B, A);
    }
    else
    {
        printf("Ton nombre A %d et ton nombre B %d sont égaux", A, B);
    }
    return 0;
}
