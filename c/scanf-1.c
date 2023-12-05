#include <stdio.h>
int main(void)
{
    char* buffer;
    printf("String please: ");
    scanf("%s", buffer);
    printf("Thanks for the %s\n", buffer);
}
// Без выделенной памяти ничего не будет работать т.к char* buffer отправляет нас к мусорному значению аля просто иди туда не знаю куда
