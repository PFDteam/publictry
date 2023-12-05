#include <stdio.h>
int main(void)
{
    int x;
    printf("Number please: ");
    scanf("%i", &x); //%i - целое число , &x - Иди и выясни адресс чего-то в данном случае x, амперсант указывает на то что надо изменить в данном случае
    printf("Thanks for the %i!\n",x);
}
