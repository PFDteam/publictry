#include <stdio.h>
#include <cs50.h>
int main(void)
{
    int высота;
    printf("Какова высота вашей пирамиды?");
    scanf("%d", &высота);
    for (int i = высота; i>=1; i--)
    {
        for (int space=1; space<i; space++)
        printf(" ");

        for (int hash=высота; hash>=i-1; hash--)
        printf("#");
    printf("\n");
    }
    return 0;
}
