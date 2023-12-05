#include<stdio.h>

int main(void)
{

    int time, bottle;

    printf("Time in Shower?\n");
    scanf("%d", &time);

    bottle = 12*time;
    printf("Youre number of bottle's=%d\n",bottle);

    return 0;
}
