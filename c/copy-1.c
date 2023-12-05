#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{

    printf("Say something: ");
    char* s = GetString();
    if (s == NULL)
    {
        return 1;
    }

    char* t = malloc((strlen(s) +1) * sizeof(char)); //malloc Запрос на выделеение памяти, sizeof позволяет определить сколько нужно байтов под каждый тип данных
    if (t == NULL)
    {
        return 1;
    }
    for (int i = 0, n = strlen(s); i <= n; i++)
    {
        t[i] = s[i];
    }
    printf("Capitalizating copy...\n");
    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }
    printf("Original %s\n", s);
    printf("Copy %s\n", t);


}
