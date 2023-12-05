#include <cs50.h>
#include <stio.h>
int main(void)
{
    printf("Say something: ");
    string s = GetString();

    printf("Say something else: ");
    string t = GetString();

    if(s == t)
{
    printf("You tape the same thing!\n");
}
else
{
    printf("You tape the different things!\n");
}
}
