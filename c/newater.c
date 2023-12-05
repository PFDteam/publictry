#include <stdio.h>
int main(void)
{
    int time, bottle;
    printf("Time in shower?\n");
    scanf("%d", & time);

    bottle = 12*time;

    printf("Youre number's of bottle =%d\n",bottle);
    return 0;
}

